from LList import *


def main():
    nums = LList([1, 2, 3, 4])
    for i in nums:
        print(i)
    nums.append(9)
    for i in nums:
        print(i)
    print()
    nums.pop(1)
    for i in nums:
        print(i)
    print()
    print(nums.index(4))

if __name__ == '__main__':
    main()
	
