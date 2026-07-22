def log(func):
    def wrapper(*args, **kwargs):
        print(f"Calling {func.__name__} with arguments {args}")
        result = func(*args, **kwargs)
        print(f"{func.__name__} finished")
        return result
    return wrapper


@log
def add(a, b):
    return a + b


@log
def multiply(a, b):
    return a * b


print(add(5, 3))
print(multiply(4, 6))