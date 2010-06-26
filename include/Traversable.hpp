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

#ifndef _TRAVERSABLE_HPP_
#define _TRAVERSABLE_HPP_

class Traversable;

#include <Branch.hpp>
#include <Visitable.hpp>
#include <Visitor.hpp>

#include <boost/shared_ptr.hpp>
#include <boost/weak_ptr.hpp>

typedef boost::shared_ptr<Traversable>      Traversable_Ptr;
typedef boost::weak_ptr  <Traversable> Weak_Traversable_Ptr;

/**
 * The Traversable class adds a method to traverse across nodes along the
 * heirarchical connections, which should be a strict-tree(1).
 *
 * Other connections and traversal methods may exist, which may be
 * generalized graphs.  However, for all of our sanity, there should be
 * a canonical/heirachal means of links that connect all nodes in a
 * non-redundant way.
 */
class Traversable : public Branch
{
public:
    /**
     * Generic Destructor
     */
    virtual ~Traversable(){}

    /**
     * The traverse command will take a visitor object, and invoke it upon
     * all heirarchal children of the current node.  This makes it easier
     * to pass logic down the tree.
     */
    virtual void traverse(Visitor &);
};

#endif
