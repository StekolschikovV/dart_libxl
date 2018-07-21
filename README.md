dart_libxl
============================

Wrapper on dart for libxl libraries

run
-
gcc -shared -Wl,-soname,libsay_hello.so -olibsay_hello.so say_hello.o &  g++ -fPIC -I/usr/lib/dart/include -DDART_SHARED_LIB -c say_hello.cc & dart ../bin/hello.dart