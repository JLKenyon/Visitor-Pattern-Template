#include <boost/python.hpp>
#include <Visitor/FloatNode.hpp>

using namespace boost::python;

void export_FloatNode()
{
    using namespace Visitor;
    class_<FloatNode>("FloatNode")
        .def("getValue", &FloatNode::getValue)
        .def("setValue", &FloatNode::setValue);

}


