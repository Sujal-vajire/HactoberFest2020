# Ask user for name

name = input("What is your name? ")

# Ask user for age

age = input("What is your age? ")

# Ask user for city

city = input("What city do you live in? ")

# Ask user what they enjoy

love = input("What do you love doing? ")

# Create output text

string = "Your name is {} and you are {} years old. You live in {} and you love {}."
output = string.format(name,age,city,love)

# Print output to screen

print(output)