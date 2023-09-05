def main():
    scores = get_scores()
    total = get_total(scores)
    average = total/len(scores)
    my_list = [get_scores]
    print('The lowest score is: ', min(scores))
    print('The highest score is: ', max(scores))
    print('the average is: ', average)

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

