from random import randint

choice = ["r","p","s"]
wins= losses= ties = 0
computer = choice[randint(0,2)]
player = False
while player == False:
	player = input("Enter 1. r for Rock, 2. p for Paper, 3. s for Scissors")
	if player == computer:
		print("Ooops! Its a tie")
		ties += 1
	elif player == "r":
		if computer == "p":
		    print("You lose!", computer, "covers", player)
		    losses += 1
		else:
		    print("You win!", player, "smashes", computer)
		    wins += 1
	elif player == "p":
		if computer == "s":
		    print("You lose!", computer, "cut", player)
		    losses += 1
		else:
		    print("You win!", player, "covers", computer)
		    wins += 1
	elif player == "s":
		if computer == "r":
		    print("You lose...", computer, "smashes", player)
		    losses += 1
		else:
		    print("You win!", player, "cut", computer)
		    wins += 1
	else:
		print("Invalid input!")
	
	play = input("Would you like to continue, Y or N")
	if play == "Y":
		player = False
	else:
		print("Your status is 1. Win: ", wins," 2. losses: ", losses, " 3. tie: ", ties)
		exit()
