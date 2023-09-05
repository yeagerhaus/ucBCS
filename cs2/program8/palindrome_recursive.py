import string


def is_palindrome(phrase):
    # base case
    if len(phrase) < 2:
        return True

    # divide into easier calculation
    # and recursive operation
    return phrase[0] == phrase[-1] and \
        is_palindrome(phrase[1:len(phrase) - 1])


while True:
    data = input('Enter text (q to quit): ')

    text = data.lower()

    if text == 'q':
        break

    # strip all non alphanumeric characters
    # using Python list comprehension
    text = ''.join([letter for letter in text
                    if letter in (string.ascii_lowercase + string.digits)])

    text_is_a_palindrome = is_palindrome(text)

    if text_is_a_palindrome:
        print("'{}' is a palindrome.".format(data))
    else:
        print("'{}' is not a palindrome.".format(data))
