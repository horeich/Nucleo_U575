#!/usr/bin/env bash
set -e

BUILD_DIR=${1:?Usage: ./debug.sh <build-dir> [elf]}
ELF_FILE=${2:-Nucleo_U575.elf}

sudo openocd \
    -f interface/stlink.cfg \
    -f target/stm32u5x.cfg \
    >/tmp/openocd.log 2>&1 &
OPENOCD_PID=$!

sleep 1.5

arm-none-eabi-gdb "$BUILD_DIR/$ELF_FILE" \
    -ex "target remote localhost:3333" \
    -ex "monitor reset halt" \
    -ex "load" \
    -ex "break main" \
    -ex "continue"

kill $OPENOCD_PID 2>/dev/null

