nbind-examples
==============

[![build status](https://travis-ci.org/charto/nbind-examples.svg?branch=master)](http://travis-ci.org/charto/nbind-examples)

This is an example Node.js addon with several functions written in C++.

It demonstrates using [nbind](https://github.com/charto/nbind)
to easily define an API for the addon and [autogypi](https://github.com/charto/autogypi)
to prepare the project for compiling.

You need one of the following C++ compilers to install it:

- GCC 4.8 or above
- Clang 3.6 or above
- Visual Studio 2015 ([The Community version](https://www.visualstudio.com/en-us/products/visual-studio-community-vs.aspx) is fine)

Usage
-----

First install:

```bash
git clone https://github.com/charto/nbind-examples.git
cd nbind-examples
npm install
```

Then run individual examples:

```bash
node 0-hello.js
node 1-headers.js
node 2-classes.js
node 3-methods.js
node 4-getset.js
node 5-objects.js
```

License
=======

These examples are public domain.
