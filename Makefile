basedir=/usr/local

bindir=$(basedir)/bin
datadir=$(basedir)/lib/userserv

CC=gcc
CFLAGS+=-g -Wall -std=gnu99
LIBS+=-lpam
INSTALL=install

DATAFILES=selfsignedkey.pem
JAVASCRIPTFILES=websession.js websessionmanager.js
SCRIPTFILES=jsondir launch-websession launch-websession-manager
NODEMODULES=websocket sugar
PROGFILES=userserv naosserv

userserv: userserv.c authenticationtoken.c websocketbridge.c urlcode.c readuntil.c mimehash.c
	$(CC) userserv.c $(LIBS) -o userserv

naosserv: userserv.c authenticationtoken.c websocketbridge.c urlcode.c readuntil.c mimehash.c
	$(CC) userserv.c $(LIBS) -DNOTANOS -o naosserv

selfsignedkey.pem:
	openssl req -newkey rsa:2048 -new -nodes -x509 -days 3650 -keyout key.pem -out cert.pem -subj "/C=NZ/ST=Discombombulated/L=Neverwhere/O=Dis/CN=userserv_selfsigned_key"
	cat key.pem cert.pem >selfsignedkey.pem

mimehash.c: mimetypes.gperf
	gperf -t mimetypes.gperf --ingore-case -S 4 >mimehash.c

all: userserv naosserv selfsignedkey.pem

install-javascript:
	mkdir -p $(datadir)
	$(INSTALL) -m644 $(JAVASCRIPTFILES) "$(datadir)"
	cp -dR --preserve=mode,timestamps node_modules "$(datadir)"

install-scripts:
	$(INSTALL)  -m755 $(SCRIPTFILES) "$(datadir)"
	$(INSTALL)  -m755 userserv_launch_script.sh "$(bindir)"/userserv

install: all install-scripts install-javascript
	mkdir -p $(datadir)
	$(INSTALL) -s -m755 $(PROGFILES) "$(datadir)"
	$(INSTALL)  -m644 $(DATAFILES) "$(datadir)"

clean:
	rm -vf userserv
	rm -vf naosserv
	rm -vf *.pem
