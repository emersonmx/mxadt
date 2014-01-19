#! /bin/sh

rm -rf autom4te.cache/
rm -rf build-aux/
rm -rf m4/

mkdir -p m4
set -e
autoreconf --install --force .

