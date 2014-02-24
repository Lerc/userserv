#!/bin/bash
if [ "$(whoami)" != 'root' ]; then
	echo "userserv needs to be run as root in order to allow user login"
	exit 1;
fi

pushd $(dirname "$0") >/dev/null
HERE=$(pwd)
popd >/dev/null
SUPPORTFILES=$HERE/../lib/userserv

if [ -d "$SUPPORTFILES" ]; then
	cd $SUPPORTFILES
fi


echo $HERE
pwd

for arg in "$@:"
do
	case $arg in
		-n | --notanos ) 
			NOTANOS="yes"
			;;
		
		-x | --nosocat )
			NOSOCAT="yes"						
	esac
done

if [ NOSOCAT != 'yes' ]; then
	sudo socat openssl-listen:443,fork,verify=0,cert=selfsignedkey.pem  tcp:localhost:8082 &
fi

if [ NOTANOS == 'yes']; then
	exec ./naosserv
fi

exec ./userserv