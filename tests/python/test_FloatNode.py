#!/usr/bin/env python

import libpyVisitor as visitor
import unittest

class FloatNodeTest(unittest.TestCase):
    def test_simple1(self):
        value = float(12.34)
        node = visitor.FloatNode()
        node.setValue(value)
        self.assert_(abs(node.getValue()-value) < 0.0001)
    def test_simple2(self):
        value = float(24.68)
        node = visitor.FloatNode()
        node.setValue(value)
        self.assert_(abs(node.getValue()-value) < 0.0001)



