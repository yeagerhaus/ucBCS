#Cole Yeager
#Test 2
#2/20/18

import sys
import unittest

from test2 import *

class TestEquation(unittest.TestCase):
	
	def test_Equation_15(self):
		# The input values for n and k should be 6, and 2, equaling 15
		b = Binomial()
		b.Equation()
		self.assertEqual(b.solve, 15)
		
	def test_Equation_4845(self):
		# The input values for n and k should be 20, and 4, equaling 15
		b = Binomial()
		b.Equation()
		self.assertEqual(b.solve, 4845)
		
		
def main():
	unittest.main()
	
if __name__ == '__main__':
    unittest.main()

