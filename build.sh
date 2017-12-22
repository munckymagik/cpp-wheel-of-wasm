#!/bin/bash

set -x
set -e

# -s passes options to the JavaScript/WASM code generator
# -g causes generation of the wasm.map and wast files
em++ \
  -g \
  wheel_of_lunch.cpp \
  -s WASM=1 \
  -s EXPORTED_FUNCTIONS='["_make_suggestion"]' \
  -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall", "cwrap"]' \
  --emrun \
  --pre-js application.js \
  -o wheel_of_lunch.html
