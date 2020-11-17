def is_palindrome(string):
    if string[-1::-1]==string[:]:
        print("Palindrome String")
    else:
        print("Not an Palindrom")

char=input("Enter the String :")
is_palindrome(char)
