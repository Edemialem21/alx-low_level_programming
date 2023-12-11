#!/bin/bash
wget -P /tmp/ https://raw.githubusercontent.com/Edemialem21/alx-low_level_programming/master/0x18-dynamic_libraries/libage.so
export LD_PRELOAD=/tmp/libage.so
