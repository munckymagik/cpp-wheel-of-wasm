#!/bin/bash

set -x
set -e

test -d build || ./build.sh

test -d docs && rm -rf docs
test -d docs || mkdir docs

cp -r build/* docs/
