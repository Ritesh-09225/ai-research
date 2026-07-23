import random
choices = ['rock', 'paper', 'scissors']
choice = random.choice(choices)
user_choice = input("Enter your choice: ")
if user_choice == choice:
    print("Tie")
elif user_choice == 'rock' and choice == 'scissors':
    print("You win")
elif user_choice == 'paper' and choice == 'rock':
    print("You win")
elif user_choice == 'scissors' and choice == 'paper':
    print("You win")
else:
    print("You lose")   

