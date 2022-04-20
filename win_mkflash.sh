#!/bin/sh
make ergodone:shdwp
./hid_bootloader_cli.exe -mmcu=atmega32u4 ergodone_shdwp.hex -w