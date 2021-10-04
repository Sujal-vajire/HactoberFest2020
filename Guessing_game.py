//you have to guess a no. between 1 to 10 and this cose will give you hint and you won if you guess right
import random 
the_number = random.randint(1, 10)
guess = int(input("guess a number between  1 and 10: "))
while guess != the_number:
	if guess > the_number:
		print(guess, "was too high. try again.")
	if guess < the_number:
		print(guess, "was too low. try again")
	guess = int(input("guess again"))
print(guess, "was the number! you win!")		
