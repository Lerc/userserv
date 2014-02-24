userserv
========
A static http server that serves with the permissions of individual Linux users, 
It was designed with https://github.com/Lerc/notanos in mind. The basic server,
simply serves files (and json for directories). Running <tt>userserv -n</tt> will
enable the server to listen for websocket upgrade requests and upon successful handshake,
run the server side of notanos.  The notanos component requires nodejs. 

The server runs as root,  Accepts logins, but only serves filesystem data after dropping privelages.

Userserv delegates the SSL responsibility to socat.  Socat listens for https connections from the outside world and frowards them to port 8082.  useserv only accepts connections from localhost.

###What happens in a request?###
userserv runs as root.  Root level process works like this.

####Core process(root):
+ Accept connections from localhost:8082 on connection fork();

####Forked process(root):
+ Read http headers.
+ If there is no cookie token, send login page and exit
+ If the request was a POST to /login verify details via PAM and create a TOKEN in /var/lib/userserv and send as cookie. exit.
+ If there is a cookie token check for the file /var/lib/userserv/COOKIE_TOKEN
+ If token file exists read the file to find the UID of the logged in user.
+ drop root priveleges, setuid down to the user specified in the file

####Procees is no longer root.
+ If the headers indicate a websocket upgrade,  Negotiate conection upgrade, dup2() connection FD into STDIO, exec launch-websession 
+ if the GET URL is a directory use the jsondir script to send a directory information page.
+ if the GET URL is a file send the file.


Setup
=====

Assuming you have GCC and libpam-dev.

    make all

The make process generates a self signed certificate to use.  It will ask for some details,
If you don't want to add details, pressing enter at every prompt should work.

To install

		sudo make install

Start the server with

		sudo userserv
	
you should then be able to https://machine_name_or_ip to get the login screen

once logged in try https://machine_name_or_ip/proc/cpuinfo

now try reading a file you shouldn't be allowed to see 

https://machine_name_or_ip/root/.bashrc

<s>You can see logging information in userserv.log.  There's a lot of logging going on
right now because of the developmental state of the program,
You _will_ see plaintext passwords in the logfile.  That'll be turned off soon. 
</s>  logging should be off by default now.

