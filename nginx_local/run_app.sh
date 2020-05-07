#!/bin/bash

echo "Killing previous instances..."
#killall -w $2
while $(pkill -3 ${2:0:15} 2>/dev/null); do
    sleep 1
done
echo "Done"

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$1/lib
echo $1/bin/$2
spawn-fcgi -p 8000 -n $1/bin/$2 "${@:3}"
