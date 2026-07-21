answer = 7
guess = 0
while guess != answer:
    guess = int(input("Guess the number between 1 and 10: "))
    if guess < answer:
        print("Too low")
    elif guess > answer:
        print("Too high")
    else:
        print("Correct!")

        