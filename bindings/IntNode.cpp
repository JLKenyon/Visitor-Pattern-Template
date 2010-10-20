#include <boost/python.hpp>
#include <Visitor/IntNode.hpp>

using namespace boost::python;

void export_IntNode()
{
    using namespace Visitor;

    class_<IntNode>("IntNode")
        .def("getValue", &IntNode::getValue)
        .def("setValue", &IntNode::setValue);
}

