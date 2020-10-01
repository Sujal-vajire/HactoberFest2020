import random
num_guess=random.randint(1,100)

for i in range(1000):
    num=int(input("Enter the number : "))
    if num==num_guess:
        print("You win the game in {} guesses".format(i+1))
        break
    elif num>num_guess:
        print("You too high")
    else:
        print("you too low")
