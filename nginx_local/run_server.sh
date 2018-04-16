#!/bin/bash

mkdir -p tmp/client_body_temp
mkdir -p tmp/proxy
mkdir -p tmp/fastcgi
mkdir -p tmp/uwsgi
mkdir -p tmp/scgi
mkdir -p tmp/uploads
mkdir -p tmp/upload_state

mkdir -p log

nginx -p . -c nginx.conf -g "pid tmp/nginx.pid; worker_processes 2;"

