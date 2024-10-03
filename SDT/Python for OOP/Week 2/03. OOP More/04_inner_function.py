def outer_function(greeting):
    # This is the outer function
    print(f"Outer function says: {greeting}")

    # Inner function defined inside outer function
    def inner_function(name):
        # This is the inner function, it uses a variable from the outer function
        return f"{greeting}, {name}!"  # Uses 'greeting' from outer function (closure)
    
    # Another inner function for demonstration
    def inner_function_two(name):
        # This inner function also uses 'greeting' from the outer function
        print(f"Inner function says: {greeting}, {name}!")
        return "Return Sishir Siam"

    # Calling the inner functions from within the outer function
    message = inner_function("Siyam")
    print(message)
    
    return inner_function_two("Siyam")  # Returns the result of the second inner function


# Example usage
outer_result = outer_function("Hello")
print(outer_result)  # Output the result from the second inner function


"""
Key Points:
1. Encapsulation: The inner functions are not accessible from outside the outer function.
2. Closure: Inner functions can capture and use variables (e.g., 'greeting') from the outer function.
3. Scope: The inner functions are local to the outer function, keeping the code clean and preventing access to the inner functions from outside.
4. Use Case: Inner functions are useful when the functionality is relevant only to the enclosing function, and multiple inner functions can be used for different tasks.
"""
