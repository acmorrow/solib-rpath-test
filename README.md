solib-rpath-test
================

Demonstrates using an RPATH in a shared library to effect at-link-time indirect dependency search

To test, demonstrating what happens if the directly depended library does not have an RPATH to
the install location of the indirectly depended library.

scons -C ./libs --prefix=$(pwd)/install install
scons -C ./client --prefix=$(pwd)/install install

This second build will fail, saying that it can't locate libbar.so

To test, to validate that the RPATH of the directly depended library is used at link time to
locate the indirect dependency. This build should succeed, since when client is linked against
libfoo, the RPATH set in libfoo is used to find libbar.

scons -C ./libs --prefix=$(pwd)/install install --use-rpath-in-libs
scons -C ./client --prefix=$(pwd)/install install


