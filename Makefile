basedir=/usr/local

bindir=$(basedir)/bin
datadir=$(basedir)/lib/userserv

CC=gcc
CFLAGS+=-g -Wall -std=gnu99 
LIBS+=-lpam
INSTALL=install

DATAFILES=websession.js websessionmanager.js selfsignedkey.pem
SCRIPTFILES=jsondir launch-websession launch-websession-manager 
PROGFILES=userserv naosserv 

userserv: userserv.c authenticationtoken.c websocketbridge.c urlcode.c readuntil.c
	$(CC) userserv.c $(LIBS) -o userserv

naosserv: userserv.c authenticationtoken.c websocketbridge.c urlcode.c readuntil.c
	$(CC) userserv.c $(LIBS) -DNOTANOS -o naosserv

selfsignedkey: 
	openssl req -newkey rsa:2048 -new -nodes -x509 -days 3650 -keyout key.pem -out cert.pem
	cat key.pem cert.pem >selfsignedkey.pem
	
all: userserv naosserv selfsignedkey

install:  selfsignedkey.pem
	mkdir -p $(datadir)
	$(INSTALL) -s -m755 $(PROGFILES) "$(datadir)"
	$(INSTALL)  -m755 $(SCRIPTFILES) "$(datadir)"
	$(INSTALL)  -m644 $(DATAFILES) "$(datadir)"
	$(INSTALL)  -m755 userserv_launch_script.sh "$(bindir)"/userserv
	
clean:
	rm -vf userserv
	rm -vf naosserv
	rm -vf *.pem
	
	
	