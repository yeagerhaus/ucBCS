	
	
	
import statistics	
	
#class TestScore(object):	
def main():
    scores = get_scores()
    total = get_total(scores)
    average = total/len(scores)
    my_list = [get_scores]
    print('Test Score Statistics: ')
    print('Total: ', sum(scores)
    #print('Number of Scores: ', len(socres))
    #print('Average Score: ', average(scores))
    print('Low Score: ', min(scores))
    print('High Score: ', max(scores))
    #print('Median Score: ', statistics.median(scores))
    

def get_scores():
    test_scores = []
    for scores in range(10):
        value = float(input('Enter score: '))
        test_scores.append(value)
    return test_scores

def get_total(value_list):
    total = 0.0
    for num in value_list:
        total += num
    return total
	
main()

#def main():
#    test = TestScore()
#    test.init()
    
#if __name__ == '__main__':
#    main()
