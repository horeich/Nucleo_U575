#!/bin/bash
set -e

FILE=${1:-build/Nucleo_U575.elf}

sudo openocd \
  -f interface/stlink.cfg \
  -f target/stm32u5x.cfg \
  -c "program $FILE verify reset exit"
