// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tchar.h>



// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�

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
