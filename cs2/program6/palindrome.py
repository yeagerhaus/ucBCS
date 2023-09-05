"""Cole Yeager
CS2
Program 6
palindrome.py
2/2/18 """

from queue import Queue
from stack import Stack
import string

def isPalindrome(phrase):
	forward = Queue()
	reverse = Stack()
	extractLetters(phrase, forward, reverse)
	return sameSequence(forward, reverse)
	

def extractLetters(phrase, q, s):
	for ch in phrase:
		if ch.isalpha():
			ch = ch.lower()
			q.enqueue(ch)
			s.push(ch)
			
def sameSequence(q, s):
	while q.size() > 0:
		ch1 = q.dequeue()
		ch2 = s.pop()
		if ch1 != ch2:
			return False
	return True



isPalindrome("Able was I, ere I saw Ella")
