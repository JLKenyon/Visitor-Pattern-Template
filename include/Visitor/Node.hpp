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
 */

#ifndef _NODE_HPP_
#define _NODE_HPP_

namespace Visitor
{
    class Node;
}
#include <Visitor/Traversable.hpp>
#include <Visitor/Types.hpp>
#include <Visitor/Visitable.hpp>

#include <boost/shared_ptr.hpp>
#include <boost/weak_ptr.hpp>

namespace Visitor
{
    /// Smart Pointer
    typedef boost::shared_ptr<Node>      Node_Ptr;

    /// Weak Smart Pointer
    typedef boost::weak_ptr  <Node> Weak_Node_Ptr;

    /**
     * The Node class is the lowest level abstraction which the users of the
     * library will want to use.  It actually adds no functionality on top
     * of the Traversable object.
     */
    class Node : public Traversable
    {
        public:
            /**
             * Generic Destructor
             */
            virtual ~Node(){}
    };
}
#endif /* NODE_HPP */

