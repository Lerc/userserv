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

while getopts ":nx" opt; do
	case $opt in
		n) 
			NOTANOS="yes"
			;;
		
		x)
			NOSOCAT="yes"						
	esac
done

if [ "$NOSOCAT" != 'yes' ]; then
	socat openssl-listen:443,fork,verify=0,cert=selfsignedkey.pem  tcp:localhost:8082 &
fi

if [ "$NOTANOS" == 'yes' ]; then
  if [ -z "$WEBLOGIN_REDIRECT" ]; then
		export WEBLOGIN_REDIRECT="~/Notanos/index.html"
	fi
	exec ./naosserv
fi

exec ./userserv
