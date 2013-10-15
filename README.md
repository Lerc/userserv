userserv
========
A static http server that serves with the permissions of individual Linux users
(this program is alpha quality)

The server runs as root to accept connections and read the HTTP request
header.

Any requests that lack an authorisation cookie will receive a response
of a login page.

If a valid authorisation cookie is present the process drops privileges
to be that user before serving the file request.  Thus users can see 
their files as if they were a logged in user.

This is, of course not without security hazards, but should be no less
secure than allowing remote login via username and password.

The server process itself only listens on 127.0.0.1:8082 without any ssl
encryption, however the HTTP response headers specify the cookie as 
"Set-Cookie: XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX; Secure; HttpOnly"

To provide a secure remote port use something like socat to handle
accepting ssl connections from the outside world.

socat openssl-listen:443,fork,verify=0,cert=server.pem  tcp:localhost:8082

Setup
=====

Assuming you have GCC and libpam.

    ./buildit.sh


You will also need a SSL certificate.   You can make a self signed certificate with

    openssl req -newkey rsa:2048 -new -nodes -x509 -days 3650 -keyout key.pem -out cert.pem
    cat key.pem cert.pem >server.pem


it puts auth keys in /var/userserv/  make sure this can't be read by anyone else

    sudo mkdir /var/userserv
    sudo chmod 700 /var/userserv


Then run the server and socat

    sudo userserv
    sudo socat openssl-listen:443,fork,verify=0,cert=server.pem  tcp:localhost:8082


you should then be able to https://machine_name_or_ip to get the login screen

once logged in try https://machine_name_or_ip/proc/cpuinfo

now try reading a file you shouldn't be allowed to see 

https://machine_name_or_ip/root/.bashrc

You can see logging information in userserv.log.  There's a lot of logging going on
right now because of the developmental state of the program.

