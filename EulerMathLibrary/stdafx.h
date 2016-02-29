// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

//windows specific headers
#ifndef __linux
#include "targetver.h"
#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#include <windows.h>
#endif //ifndef __linux

//c++ and project headers
#include <math.h>
#include "EulerMathLibrary.h"
