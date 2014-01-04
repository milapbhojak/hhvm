/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-2013 Facebook, Inc. (http://www.facebook.com)     |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef incl_HPHP_EXT_BCMATH_H_
#define incl_HPHP_EXT_BCMATH_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include "hphp/runtime/base/base-includes.h"

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

bool f_bcscale(int64_t scale);
String f_bcadd(const String& left, const String& right, int64_t scale = -1);
String f_bcsub(const String& left, const String& right, int64_t scale = -1);
int64_t f_bccomp(const String& left, const String& right, int64_t scale = -1);
String f_bcmul(const String& left, const String& right, int64_t scale = -1);
String f_bcdiv(const String& left, const String& right, int64_t scale = -1);
String f_bcmod(const String& left, const String& right);
String f_bcpow(const String& left, const String& right, int64_t scale = -1);
Variant f_bcpowmod(const String& left, const String& right,
                   const String& modulus, int64_t scale = -1);
Variant f_bcsqrt(const String& operand, int64_t scale = -1);

///////////////////////////////////////////////////////////////////////////////
}

#endif // incl_HPHP_EXT_BCMATH_H_