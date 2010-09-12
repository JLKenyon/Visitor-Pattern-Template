/*
  Copyright (c) 2010 John Lincoln Kenyon
  
  Permission is hereby granted, free of charge, to any person
  obtaining a copy of this software and associated documentation
  files (the "Software"), to deal in the Software without
  restriction, including without limitation the rights to use,
  copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the
  Software is furnished to do so, subject to the following
  conditions:
  
  The above copyright notice and this permission notice shall be
  included in all copies or substantial portions of the Software.
  
  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
  OTHER DEALINGS IN THE SOFTWARE.
*/

/**
 * The Types file contains a simple switch-board/wrapper for various simple
 * types used within the library.  This allows for simple refactoring by
 * making a switch at a single line within this file.
 *
 * Ideally, a test would exist that would test the entire library where
 * the types listed here are changed to other compatible types, such as if
 * the deque class were replaced by the vector or list class, and retested.
 */

#ifndef _TYPES_HPP_
#define _TYPES_HPP_

template <typename T>
struct Types;

#include <vector>
#include <list>
#include <map>
#include <deque>

/**
 * The Types struct exists at a means of exploiting a failing of the template
 * system in C++, specifically that one cannot apply templates to a typedef.
 * 
 * One could instead create a new class for each, inheriting from the desired
 * class, but this is a bit cumbersome for simple cases.
 */
template <typename T>
struct Types
{
    /**
     * The Container is the generic linear container used within the Visitor
     * example.  It can be replaced fairly easily by changing it here.
     *
     * The Deque class was selected because it is optimized for adding nodes
     * to the end, and is a generally flexible type.  This choice is actually
     * fairly flexible, vector<> or list<> would work as well.
     */
    typedef std::deque<T> Container;
};

#endif /* _TYPES_H_ */
