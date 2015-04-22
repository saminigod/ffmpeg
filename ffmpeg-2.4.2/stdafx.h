// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tchar.h>



// TODO:  在此处引用程序需要的其他头文件

#ifndef __STDC_CONSTANT_MACROS
#define __STDC_CONSTANT_MACROS
#endif

#ifndef __STDC_FORMAT_MACROS
#define __STDC_FORMAT_MACROS
#endif

#ifndef snprintf
#define snprintf _snprintf
#endif

#define inline _inline

#ifndef INT64_MIN
#define INT64_MIN _I64_MIN
#endif

#ifndef INT64_MAX
#define INT64_MAX    _I64_MAX
#endif

#ifndef UINT64_MAX
#define UINT64_MAX _UI64_MAX
#endif

#ifndef INT64_C
#define INT64_C(c) (c ## LL)
#define UINT64_C(c) (c ## ULL)  
#endif  //INT64_C
