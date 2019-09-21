#!/bin/bash
source set_env.sh
git submodule update --init --recursive
cd firmware
bash mpy_cross.sh || exit 1
rm build -rf
make clean
make -j8
