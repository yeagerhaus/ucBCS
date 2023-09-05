#Cole Yeager
#Test 2
#2/20/18

import math

class Binomial(object):
	def Equation(self):
		n = int(input("Enter a value for n: "))
		k = int(input("Enter a value for k: "))
		if k == n:
			print(1)
		elif k == 1:         
			print(x)
		elif k > n:          
			print(0)
		else:               
			a = math.factorial(n)
			b = math.factorial(k)
			c = math.factorial(n-k)  
			self.solve = a // (b * c)
			print(self.solve)



def main():
	b = Binomial()
	b.Equation()
	
if __name__ == '__main__':
	main()
