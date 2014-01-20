#!/bin/sh

export prefix=../
export TARGET=m68k
export CPU=m68k
export SYNTAX=mot

make -C vbcc all &&
make -C vasm install &&
make -C vlink install || {
	echo "Could not build VASM" >&2
	exit 1
}

