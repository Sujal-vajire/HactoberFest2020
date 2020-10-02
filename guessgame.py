import random
secretnum= random.randint(1,20)
print('Guess a number between 1 to 20')

for i in range(1,7):
	guessednum= int(input("Take a Guess"))
	
	if guessednum<secretnum:
		print('Your guess is too low')
	elif guessednum>secretnum:
		print('Your guess is too high')
	else:
		break
if guessednum==secretnum:
	print("Good Job! You have taken" + str(i) + "turns to guess the right answer")
else:
	print("Ooops no offense! The computer generated number is" + str(secretnum))

