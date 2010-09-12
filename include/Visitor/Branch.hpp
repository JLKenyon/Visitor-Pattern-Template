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

#ifndef _BRANCH_HPP_
#define _BRANCH_HPP_

namespace Visitor
{
    class Branch;
}

//#include <Node.hpp>

#include <Visitor/Visitable.hpp>
#include <Visitor/Types.hpp>

#include <boost/shared_ptr.hpp>
#include <boost/weak_ptr.hpp>

namespace Visitor
{
    /// Smart Pointer
    typedef boost::shared_ptr<Branch>      Branch_Ptr;

    /// Weak Smart Pointer
    typedef boost::weak_ptr  <Branch> Weak_Branch_Ptr;

    /**
     * The Branch class adds a list of links to children, 
     */
    class Branch : public Visitable, public Types<Branch_Ptr>::Container
    {
        public:
            /**
             * Generic destructor
             */
            virtual ~Branch(){}
    };

}

#endif /* BRANCH_HPP */
