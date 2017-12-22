#!/bin/bash

set -x
set -e

test -d build || mkdir build

# -s passes options to the JavaScript/WASM code generator
# -g causes generation of the wasm.map and wast files
em++ \
  -std=c++11 \
  -Wall \
  -Wextra \
  -g \
  lib.cpp \
  -s WASM=1 \
  -s EXPORTED_FUNCTIONS='["_make_suggestion"]' \
  -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall", "cwrap"]' \
  --emrun \
  --pre-js application.js \
  -o build/index.html
