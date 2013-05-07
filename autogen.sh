#! /bin/sh

mkdir -p m4
set -e
autoreconf --install --force
rm -rf autom4te.cache
