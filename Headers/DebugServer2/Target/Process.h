//
// Copyright (c) 2014, Facebook, Inc.
// All rights reserved.
//
// This source code is licensed under the University of Illinois/NCSA Open
// Source License found in the LICENSE file in the root directory of this
// source tree. An additional grant of patent rights can be found in the
// PATENTS file in the same directory.
//

#ifndef __DebugServer2_Target_Process_h
#define __DebugServer2_Target_Process_h

#if defined(__linux__)
#include "DebugServer2/Target/Linux/Process.h"
#elif defined(_WIN32)
#include "DebugServer2/Target/Windows/Process.h"
#else
#error "Target not supported."
#endif

namespace ds2 {
namespace Target {

#if defined(__linux__)
using Linux::Process;
#elif defined(_WIN32)
using Windows::Process;
#else
#error "Target not supported."
#endif
}
}

#endif // !__DebugServer2_Target_Process_h