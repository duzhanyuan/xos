########################################################################
# Copyright (c) 1988-$year$ $organization$
#
# This software is provided by the author and contributors ``as is'' 
# and any express or implied warranties, including, but not limited to, 
# the implied warranties of merchantability and fitness for a particular 
# purpose are disclaimed. In no event shall the author or contributors 
# be liable for any direct, indirect, incidental, special, exemplary, 
# or consequential damages (including, but not limited to, procurement 
# of substitute goods or services; loss of use, data, or profits; or 
# business interruption) however caused and on any theory of liability, 
# whether in contract, strict liability, or tort (including negligence 
# or otherwise) arising in any way out of the use of this software, 
# even if advised of the possibility of such damage.
#
#   File: Makefile
#
# Author: $author$
#   Date: $date$
#
# Linux Gcc Makefile for Xos libXosXcb Shared Library
########################################################################

PKG = $(PWD)/../../../../../..

PRJ = projects/linux/Makefile/Gcc
SRC = src

include $(PKG)/$(PRJ)/Makedefines
include $(PKG)/$(PRJ)/Makedefines.xcb

#
# user ld flags
#
USRLDFLAGS = \

#
# user c flags
#
USRCFLAGS = \

#
# user c++ flags
#
USRCXXFLAGS = \

#
# user defines
#
USRDEFINES = \

#
# user includes
#
USRINCLUDES = \
$(_xcb_USRINCLUDES) \

#
# user libdirs
#
USRLIBDIRS = \

#
# target
#
SLIBTARGET = libXosXcb.$(SLIBEXT)

#
# Shared Library C sources
#
SLIB_C_SOURCES = \

#
# Shared Library C++ .cc sources
#
SLIB_CC_SOURCES = \

#
# Shared Library C++ .cxx sources
#
SLIB_CXX_SOURCES = \

#
# Shared Library C++ .cpp sources
#
SLIB_CPP_SOURCES = \
$(PKG)/$(SRC)/xos/gui/x11/xcb/Connection.cpp \
$(PKG)/$(SRC)/xos/gui/x11/xcb/Screen.cpp \
$(PKG)/$(SRC)/xos/gui/x11/xcb/Setup.cpp \
$(PKG)/$(SRC)/xos/gui/x11/xcb/Main.cpp \


#
# Shared Library Objective C .m sources
#
SLIB_M_SOURCES = \

#
# Shared Library Objective C++ .mm sources
#
SLIB_MM_SOURCES = \

#
# Shared Library libs
#
#LIBS = \
#-lsomelib
#
LIBS = \

#
# Shared Library depends
#
#SLIBDEP = \
#$(PKG)/$(BLD)/libsomelib \
#
SLIBDEP = \

#
# Shared Library depend dirs
#
#SLIBDEP_DIRS = \
#../libsomelib
#
SLIBDEP_DIRS = \

include $(PKG)/$(PRJ)/Makerules

#
# Shared Library depend rules
#
#$(PKG)/$(BLD)/libsomelib.a:
#	@(echo Building libsomelib.a ...;\
#	  pushd ../libsomelib;\
#	  ((make) || (exit 1));\
#	  popd)
#

