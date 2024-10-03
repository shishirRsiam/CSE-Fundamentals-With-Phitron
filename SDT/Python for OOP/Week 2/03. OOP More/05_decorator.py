import functools

def my_decorator(func):
    @functools.wraps(func)  # This preserves the original function’s metadata
    def wrapper(*args, **kwargs):
        print("Something is happening before the function is called.")
        result = func(*args, **kwargs)  # Passing all arguments to the original function
        print("Something is happening after the function is called.")
        return result
    return wrapper

@my_decorator
def greet(name):
    """Greet a person by name."""
    print(f"Hello, {name}!")

# Example usage
greet("Siyam")

# Check the original function's metadata
print(greet.__name__)  # Output: greet
print(greet.__doc__)   # Output: Greet a person by name.
