#!/bin/bash
set -e

FILE=${1:-build/Nucleo_U575.elf}

sudo openocd \
  -f interface/stlink.cfg \
  -f target/stm32u5x.cfg \
  -c "adapter speed 100" \
  -c "reset_config srst_only srst_nogate connect_assert_srst" \
  -c "init" \
  -c "reset init" \
  -c "program $FILE verify" \
  -c "reset" \
  -c "exit"
