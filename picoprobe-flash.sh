#!/bin/sh

openocd -f interface/picoprobe.cfg -f target/rp2040.cfg -c "program out/build/projectname.elf verify reset exit"
