#!/bin/bash

killall -w $2

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$1/lib
echo $1/bin/$2
spawn-fcgi -p 8000 -n $1/bin/$2

