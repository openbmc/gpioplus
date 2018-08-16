# gpioplus

gpioplus is a c++ wrapper around the linux gpio ioctl interface.
It aims to provide c++ ergonomics to the usage.

## Dependencies

Test cases require google{test,mock}, valgrind, and lcov.

## Building
For a standard release build, you want something like:
```
./bootstrap.sh
./configure --disable-tests
make
make install
```

For a test / debug build, a typical configuration is
```
./bootstrap.sh
./configure --enable-tests --enable-coverage --enable-valgrind
make
make check
make check-valgrind
make check-code-coverage
```
