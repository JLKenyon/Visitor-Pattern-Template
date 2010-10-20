#!/usr/bin/env python

import libpyVisitor as visitor
import unittest

class IntNodeTest(unittest.TestCase):
    def test_simple1(self):
        value = 12
        node = visitor.IntNode()
        node.setValue(value)
        self.assertEqual(node.getValue(), value)
    def test_simple2(self):
        value = 24
        node = visitor.IntNode()
        node.setValue(value)
        self.assertEqual(node.getValue(), value)



