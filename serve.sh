#!/bin/bash

set -x
set -e

emrun --no_browser --port 8080 ./build/index.html
