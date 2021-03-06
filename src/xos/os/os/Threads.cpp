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
///   File: Threads.cpp
///
/// Author: $author$
///   Date: 10/4/2012
///////////////////////////////////////////////////////////////////////
#include "xos/os/os/Threads.hpp"
#include "xos/os/os/Thread.cpp"

#if defined(WINDOWS) 
// Windows 
#include "xos/os/windows/Threads.cpp"
#else // defined(WINDOWS) 
// Unix 
#include "xos/os/unix/Threads.cpp"
#endif // defined(WINDOWS) 

namespace xos {
namespace os {

} // namespace os 
} // namespace xos 
