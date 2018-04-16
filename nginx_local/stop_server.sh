#!/bin/bash

nginx -p . -s stop -c nginx.conf -g "pid tmp/nginx.pid;"

