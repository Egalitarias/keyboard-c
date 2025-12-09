# Keyboard

Solves a problem where a commanline tool has too many readchar() function calls to refactor

Add source code to your project:

* keyboard.h
* keyboard.c

See main.c for an example

# Build kbtest


```
if [ ! -e config.h.in ]; then
    touch config.h.in
fi
aclocal
automake --add-missing --foreign
autoconf
./configure
make
```

# Test

* Run the test using the command below:

```
./kbtest
```
