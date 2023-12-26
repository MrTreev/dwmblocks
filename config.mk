# dwm version
VERSION    = 
BINNAME    = dwmblocks

# paths
BLD        = bld
SRC        = src
MAN        = man
SYS        = sys
PREFIX     = /usr/local
MANDIR     = 
WATCH      = $(SRC)/config.h
DEPS       = 

X11INC = /usr/X11R6/include
X11LIB = /usr/X11R6/lib

INCS = -I${X11INC} -I${FREETYPEINC}
LIBS = -L${X11LIB} -lX11 ${XINERAMALIBS} ${FREETYPELIBS} -lX11-xcb -lxcb -lxcb-res

# flags
CFLAGS   = -std=c99 -pedantic -Wall -Wno-deprecated-declarations -Os ${INCS}
CFLAGS  += -D_POSIX_C_SOURCE=200809L -D_DEFAULT_SOURCE -D_BSD_SOURCE -D_XOPEN_SOURCE=700L 
LDFLAGS  = ${LIBS}

# compiler and linker
CC = cc
