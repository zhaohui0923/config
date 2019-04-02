//  This file was automatically generated on Mon Apr  1 19:04:05 2019
//  by libs/config/tools/generate.cpp
//  Copyright John Maddock 2002-4.
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for the most recent version.//
//  Revision $Id$
//

#ifdef __has_include
#if __has_include(<version>)
#include <version>
#endif
#endif

#include <compare>

#ifndef __cpp_lib_three_way_comparison
#error "Macro << __cpp_lib_three_way_comparison is not set"
#endif

#if __cpp_lib_three_way_comparison < 201711
#error "Macro __cpp_lib_three_way_comparison had too low a value"
#endif

int main( int, char *[] )
{
   return 0;
}

