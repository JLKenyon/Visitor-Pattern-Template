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

#ifndef _VISITABLE_HPP_ 
#define _VISITABLE_HPP_ 

namespace Visitor
{
    class Visitable;
}
#include <Visitor/Visitor.hpp>

#include <boost/shared_ptr.hpp>

namespace Visitor
{
    /// Smart Pointer
    typedef boost::shared_ptr<Visitable>      Visitable_Ptr;
    
    /// Weak Smart Pointer
    typedef boost::weak_ptr  <Visitable> Weak_Visitable_Ptr;

    /**
     * The Visitable class is the basis for the visitor pattern.  It represents the
     * lowest level base class, with no internal logic of its own, it provides
     * a place for data to reside, by way of derived classes.
     */
    class Visitable
    {
        public:
            /**
             * Generic destructor
             */
            virtual ~Visitable(){}

            /**
             * Accept is the key method that makes the visitor pattern work.
             * By having the class, which knows its type, call the visit method
             * by way of its own virtual method accept, the types can be resolved
             * at run time, by way of the virtual function table.
             */
            virtual void accept(Visitor &);
    };
}

#endif

