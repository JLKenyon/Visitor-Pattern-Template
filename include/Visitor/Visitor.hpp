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

#ifndef _VISITOR_HPP_ 
#define _VISITOR_HPP_ 

namespace Visitor
{
    class Visitor;
}
#include <Visitor/Visitable.hpp>

namespace Visitor
{
    /**
     * The visitor class is the basic container for logic within the Visitor
     * pattern.  Any logic which runs upon the datastructure should be implemented
     * by way of a visitor object.
     */
    class Visitor
    {
        public:
            /**
             * Generic Destructor
             */
            virtual ~Visitor(){}

            /**
             * Visit is the key to the visitor pattern.  Any logic to be run on the
             * tree structure should be implemented within the visit method of a
             * Visitor object.  The specific type of node upon which the logic should
             * run is specificied in the visit method, which should be overridden for
             * all actions.
             */
            virtual void visit(Visitable *);
    };
}
#endif
