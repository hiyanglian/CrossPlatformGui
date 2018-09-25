/**
* 姓名：		btk/platform.h
* 目的：		定义操作系统和编译器的相关宏
* 作者：		练洋
* 创建时间:		2018.9.25
* 版权:			(c) 2018-2020 btk.Ltd.
* Licence:		btkWindows licence
*/
#ifndef BTKGUI_PLATFORM_H_
#define BTKGUI_PLATFORM_H_
/*
	定义windows平台
	__WINDOWS__参数的主要目的是
*/
#if defined(_WIN32) || defined(__WIN32__) ||define(BTKMSW)
#	ifndef __WINDOWS__
#		define __WINDOWS__
#	endif 
#endif

#if defined(__WINDOWS__)
#	if !defined(__BTKMSW__) && !defined(__BTKMOTIF__) && !defined(__BTKGTK__) && ! defined(__BTKX11__)
#		define __BTKMSW__
#	endif

#	if !defined(__WINDOWS__)
#		define(__WINDOWS__)
#	endif

#	ifndef _WIN32
#		define _WIN32
#	endif

#	ifndef WIN32
#		define WIN32
#	endif

#	ifndef __WIN32__
#		define __WIN32__
#	endif

	/*MSVC平台定义_WIN64为64位应用程序，对于gcc我们使用通用架构定义*/
#	if defined(WIN64) || defined(__x86_64__)
#		ifndef __WIN64__
#			define __WIN64__
#		endif
#	endif
#endif