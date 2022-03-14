#!/bin/sh

make ergodone:shdwp
./hid_bootloader_cli -mmcu=atmega32u4 ergodone_shdwp.hex -v -w
