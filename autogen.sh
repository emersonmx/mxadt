#! /bin/sh

mkdir m4
set -e
autoreconf --install --force
rm -rf autom4te.cache
