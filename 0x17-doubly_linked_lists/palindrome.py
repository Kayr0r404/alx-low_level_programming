#!/usr/bin/python3

def is_palindrome(number):
    # Convert the number to a string for easier comparison
    num_str = str(number)
    # Compare the string with its reverse
    return num_str == num_str[::-1]


def prod():
    pali = 0
    for i in range(100, 1000):
        for j in range(100, 1000):
            product = i * j
            if is_palindrome(product) and product > pali:
                pali = product
    return pali


result = prod()


# Save the result in a file
with open("102-result", "w") as file:
    file.write(str(result))
