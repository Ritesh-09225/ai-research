def numbers():
    print("Start")
    yield 1
    print("Middle")
    yield 2
    print("End")

gen = numbers()

print(next(gen))
print(next(gen))
print(next(gen))