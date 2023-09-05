"""Cole Yeager
CS2
Test 1
test1.py
1/30/18 """

#Unfortunately I couldn't get 'x' to work as the exit function, so I 
#used '0' as the exit.

from numpy import median

class TestScore(object):
	def __init__(self):
		scores = self.scores()
		total = self.process_scores(scores)
		average = total/len(scores)
		my_list = [self.process_scores]
		print('Test Score Statistics: ')
		print('Total: ', sum(scores))
		print('Number of Scores: ', len(scores))
		print('Average Score: ', average)
		print('Low Score: ', min(scores))
		print('High Score: ', max(scores))
		print('Median Score: ', median(scores))
		

	def scores(self):
		test_scores = []
		while input != 0:	
			value = float(input('Enter score: '))
			test_scores.append(value)
			if value == 0:
				return test_scores
				

	def process_scores(self, value_list):
		total = 0.0
		for num in value_list:
			total += num
		return total

		

def main():
	print('The Test Scores Program')
	print('Enter ‘0’ to exit')
	print()
	test = TestScore()
	
	

if __name__ == '__main__':
    main()




