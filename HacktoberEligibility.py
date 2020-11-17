#python program to check whether you are eligible for the HacktoberFest2020
a = int(input('Enter your number of pull requests '))
if int(a) == 1:
    print('Your have to make 3 more pull requests to become eligible for HacktoberFest')
elif int(a) == 2:
    print('Your have to make 2 more pull requests to become eligible for HacktoberFest')
elif int(a) == 3:
    print('Your have to make 1 more pull requests to become eligible for HacktoberFest')
else:
    print('Congratulations!! You are eligible for HacktoberFest')
