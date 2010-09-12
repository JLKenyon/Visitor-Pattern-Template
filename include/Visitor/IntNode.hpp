
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

#ifndef _INTNODE_H_
#define _INTNODE_H_

namespace Visitor
{
    class IntNode;
}
#include <Visitor/Node.hpp>

namespace Visitor
{
    /// Smart Pointer
    typedef boost::shared_ptr<IntNode>      IntNode_Ptr;

    /// Weak Smart Pointer
    typedef boost::weak_ptr  <IntNode> Weak_IntNode_Ptr;

    /**
     * IntNode is a trivial Node type that has a single Integer value.
     * This class is an example, it doesn't have any real purpose.
     */
    class IntNode : public Node
    {
        public:
            /**
             * Generic Destructor
             */
            virtual ~IntNode() {}

            /**
             * Default constructor, defaults to a value of zero.
             */
            IntNode();

            /**
             * Parametric constructor, user specified value
             * \param _value The initial value stored in node
             */
            IntNode(int _value);

        public:
            /**
             * Generic Integer value, no real specified purpose.
             */
            int value;

    };
}

#endif /* _INTNODE_H_ */

