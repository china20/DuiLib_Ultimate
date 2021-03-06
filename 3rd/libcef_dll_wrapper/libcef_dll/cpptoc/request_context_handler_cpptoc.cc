// Copyright (c) 2015 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/request_context_handler_cpptoc.h"
#include "libcef_dll/ctocpp/cookie_manager_ctocpp.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

cef_cookie_manager_t* CEF_CALLBACK request_context_handler_get_cookie_manager(
    struct _cef_request_context_handler_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefCookieManager> _retval = CefRequestContextHandlerCppToC::Get(
      self)->GetCookieManager();

  // Return type: refptr_diff
  return CefCookieManagerCToCpp::Unwrap(_retval);
}


// CONSTRUCTOR - Do not edit by hand.

CefRequestContextHandlerCppToC::CefRequestContextHandlerCppToC(
    CefRequestContextHandler* cls)
    : CefCppToC<CefRequestContextHandlerCppToC, CefRequestContextHandler,
        cef_request_context_handler_t>(cls) {
  struct_.struct_.get_cookie_manager =
      request_context_handler_get_cookie_manager;
}

#ifndef NDEBUG
template<> base::AtomicRefCount CefCppToC<CefRequestContextHandlerCppToC,
    CefRequestContextHandler, cef_request_context_handler_t>::DebugObjCt = 0;
#endif

