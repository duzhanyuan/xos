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
///   File: Semaphore.hpp
///
/// Author: $author$
///   Date: 10/6/2012
///////////////////////////////////////////////////////////////////////
#ifndef _XOS_OS_SEMAPHORE_HPP
#define _XOS_OS_SEMAPHORE_HPP

#include "xos/base/Acquired.hpp"

namespace xos {

typedef AcquiredInterface SemaphoreImplement;

class _EXPORT_CLASS Semaphore: virtual public SemaphoreImplement {
public:
    typedef SemaphoreImplement Implements;

    static Semaphore* New();
    static void Delete(Semaphore* s);

protected:
    virtual ~Semaphore() {}
};

} // namespace xos 

#endif // _XOS_OS_SEMAPHORE_HPP 
