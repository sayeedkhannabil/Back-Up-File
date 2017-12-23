import random

guessesTaken=0

print("hello What is your name?")
myName=input()

number=random.randint(1,20)

while guessesTaken<6:
	print("Take a guess:")
	guess=input()
	guess=int(guess)

	guessesTaken=guessesTaken+1

	if guess<number:
		print("Your guess is too low")

	if guess>number:
		print("The number is too high")

	if guess==number:
		break

if guess==number:
	guessesTaken=str(guessesTaken)
	print("You did it "+myName+" You have guessed the correct number in "+guessesTaken+" turn")

if guess!=number:
	number=str(number)
	print("Sorry "+myName+". The number is "+number) 