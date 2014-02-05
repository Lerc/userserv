userserv
========
A static http server that serves with the permissions of individual Linux users
(this program is alpha quality, It generates copious logfiles containing potetially sensitive information)

The server runs as root,  Accepts logins, but only serves filesystem data after dropping privelages.

Userserv delegates the SSL responsibility to socat.  Socat listens for https connections from the outside world and frowards them to port 8082.  useserv only accepts connections from localhost.

###What happens in a request###
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
+ If the headers indicate a websocket upgrade,  Negotiate conection upgrade, dup2() connection FD into STDIO, exec laumch-websession 
+ if the GET URL is a directory use jsondir script to send a directory information page.
+ if the GET URL is a file send the file.


Setup
=====

Assuming you have GCC and libpam.

    ./buildit.sh


You will also need a SSL certificate.   You can make a self signed certificate with

    openssl req -newkey rsa:2048 -new -nodes -x509 -days 3650 -keyout key.pem -out cert.pem
    cat key.pem cert.pem >server.pem


Then run the server and socat

    sudo userserv
    sudo socat openssl-listen:443,fork,verify=0,cert=server.pem  tcp:localhost:8082


you should then be able to https://machine_name_or_ip to get the login screen

once logged in try https://machine_name_or_ip/proc/cpuinfo

now try reading a file you shouldn't be allowed to see 

https://machine_name_or_ip/root/.bashrc

You can see logging information in userserv.log.  There's a lot of logging going on
right now because of the developmental state of the program,
You _will_ see plaintext passwords in the logfile.  That'll be turned off soon. 


