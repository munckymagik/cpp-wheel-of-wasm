# C++ Wheel of WASM

Port of the [Rusty Wheel of Lunch](https://github.com/munckymagik/rusty-wheel-of-lunch) to [WASM](http://webassembly.org/) using [Emscripten](http://kripken.github.io/emscripten-site/index.html) and C++.

# Goals

To understand how Emscripten works and how it injects system resources which the C libraries depend upon e.g. stdio, time, random number generators etc.

# Running

Install emscripten, my preferred method on Mac OS is to use Homebrew to avoid compilation. See [here](http://kripken.github.io/emscripten-site/docs/getting_started/downloads.html) for other options:

```
brew install emscripten
```

Compile the project:

```
./build.sh
```

This will create a folder called `./build` that will contain all the generated outputs. The `-g` option has been used so `em++` will output a map file and a `.wast` file so you can inspect the generated WASM in text form.

Serve web page:

```
./serve.sh
```

Now open in your browser: http://localhost:8080/
