///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2012 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: DLibrary.hpp
///
/// Author: $author$
///   Date: 10/24/2012
///////////////////////////////////////////////////////////////////////
#ifndef _XOS_OS_UNIX_DLIBRARY_HPP
#define _XOS_OS_UNIX_DLIBRARY_HPP

#include "xos/os/DLibrary.hpp"

namespace xos {
namespace unix {

typedef DLibraryImplement DLibraryImplement;
typedef ExportBase DLibraryExtend;
///////////////////////////////////////////////////////////////////////
///  Class: DLibrary
///
/// Author: $author$
///   Date: 8/14/2013
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS DLibrary: virtual public DLibraryImplement, public DLibraryExtend {
public:
    typedef DLibraryImplement Implements;
    typedef DLibraryExtend Extends;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    DLibrary() {
    }
    virtual ~DLibrary() {
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};

} // namespace unix 
} // namespace xos 

#endif // _XOS_OS_UNIX_DLIBRARY_HPP 
        

