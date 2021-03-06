///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2013 $organization$
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
///   File: Screen.hpp
///
/// Author: $author$
///   Date: 3/24/2013
///////////////////////////////////////////////////////////////////////
#ifndef _XOS_GUI_X11_SCREEN_HPP
#define _XOS_GUI_X11_SCREEN_HPP

#include "xos/gui/x11/Attached.hpp"

namespace xos {
namespace x11 {

typedef InterfaceBase ScreenImplement;
typedef Attached<XScreen*, int, 0> ScreenExtend;
///////////////////////////////////////////////////////////////////////
///  Class: Screen
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS Screen: virtual public ScreenImplement, public ScreenExtend {
public:
    typedef ScreenImplement Implements;
    typedef ScreenExtend Extends;

    ///////////////////////////////////////////////////////////////////////
    ///  Constructor: Screen
    ///////////////////////////////////////////////////////////////////////
    Screen(XDisplay* xDisplay=0, XScreen* detached=0)
    : Extends(xDisplay, detached) {
    }
    virtual ~Screen() {
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual XScreen* AttachDisplay(XDisplay& xDisplay, int screenNumber=-1) {
        XScreen* detached = 0;

        if (0 > (screenNumber))
            screenNumber =  XDefaultScreen(&xDisplay);

        if ((detached = XScreenOfDisplay(&xDisplay, screenNumber)))
            Attach(&xDisplay, detached);

        return detached;
    }
    virtual int GetNumber() const {
        int number = -1;
        if ((m_attachedTo))
            number = XScreenNumberOfScreen(m_attachedTo);
        return number;
    }
};


} // namespace x11 
} // namespace xos 


#endif // _XOS_GUI_X11_SCREEN_HPP 
        

