#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Edemialem21/alx-low_level_programming/master/0x18-dynamic_libraries/libagee.so
export LD_PRELOAD="$PWD/../libagee.so"
