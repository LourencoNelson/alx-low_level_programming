#!/bin/bash
gcc -fPIC -shared -o liball.so *.c; export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
