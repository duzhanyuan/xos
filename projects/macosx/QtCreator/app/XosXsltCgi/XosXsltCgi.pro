########################################################################
# Copyright (c) 1988-2014 $organization$
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
#   File: XosXsltCgi.pro
#
# Author: $author$
#   Date: 4/9/2014
########################################################################
include(../../../../QtCreator/lib/libXosCore.pri)

TARGET = XosXsltCgi

#XosLibXslt_VERSION = 1.2.26
#XosLibXml2_VERSION = 2.7.8

XosLibXslt_VERSION = 1.2.28
XosLibXml2_VERSION = 2.9.1

XosLibXslt_INCLUDEPATH += \
$${XOS_PKG}/../libxml2/libxslt-$${XosLibXslt_VERSION} \
$${XOS_PKG}/../libxml2/libxml2-$${XosLibXml2_VERSION}/include \

XosLibXslt_LIBS += \
-L$${HOME}/build/lib \
-lexslt \
-lxslt \
-lxml2 \

INCLUDEPATH += \
$${libXosCore_INCLUDEPATH} \
$${XosLibXslt_INCLUDEPATH} \

DEFINES += \
$${libXosCore_DEFINES} \
XOS_DEFAULT_LOGGING_LEVELS_ID=e \

HEADERS += \
$${XOS_SRC}/xos/xml/xslt/libxslt/cgi/Main.hpp \
$${XOS_SRC}/xos/xml/xslt/libxslt/Processor.hpp \
$${XOS_SRC}/xos/xml/xslt/Processor.hpp \
$${XOS_SRC}/xos/inet/http/cgi/Main.hpp \
$${XOS_SRC}/xos/inet/http/cgi/Main_main.hpp \

SOURCES += \
$${XOS_SRC}/xos/xml/xslt/libxslt/cgi/Main.cpp \
$${XOS_SRC}/xos/xml/xslt/libxslt/cgi/Main_instance.cpp \
$${XOS_SRC}/xos/xml/xslt/libxslt/Processor.cpp \
$${XOS_SRC}/xos/inet/http/cgi/Main_main.cpp \

LIBS += \
$${libXosCore_LIBS} \
$${XosLibXslt_LIBS} \
-lpthread \
-ldl \
