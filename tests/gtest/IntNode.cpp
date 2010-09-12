
#include <gtest/gtest.h>

#include <Visitor/IntNode.hpp>

TEST(IntNode, ConstructorTest) {
    IntNode node;
}

TEST(IntNode, ConstructorPointerTest) {
    IntNode_Ptr ptr(new IntNode);
}

TEST(IntNode, AddChildrenSingleLayer) {
    IntNode_Ptr root(new IntNode(1));
    root->push_back( IntNode_Ptr(new IntNode(4)));
    root->push_back( IntNode_Ptr(new IntNode(7)));
    root->push_back( IntNode_Ptr(new IntNode(10)));
    root->push_back( IntNode_Ptr(new IntNode(13)));
}

TEST(IntNode, AddChildrenMultiLayer) {
    IntNode_Ptr p0(new IntNode(0));
    IntNode_Ptr p1(new IntNode(1));
    IntNode_Ptr p2(new IntNode(2));
    IntNode_Ptr p3(new IntNode(3));
    IntNode_Ptr p4(new IntNode(4));
    IntNode_Ptr p5(new IntNode(5));
    IntNode_Ptr p6(new IntNode(6));
    IntNode_Ptr p7(new IntNode(7));
    IntNode_Ptr p8(new IntNode(8));
    IntNode_Ptr p9(new IntNode(9));

    p0->push_back(p1);
    {
        p1->push_back(p2);
        p1->push_back(p3);
    }

    p0->push_back(p4);
    {
        p4->push_back(p5);
        p4->push_back(p6);
    }

    p0->push_back(p7);
    {
        p7->push_back(p8);
        p7->push_back(p9);
    }
}



