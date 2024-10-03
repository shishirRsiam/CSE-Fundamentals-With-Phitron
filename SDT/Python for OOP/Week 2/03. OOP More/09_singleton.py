class Singleton:
    _instance = None  # Class variable to hold the single instance

    def __new__(cls, *args, **kwargs):
        # This method is called to create a new instance
        if not cls._instance:
            cls._instance = super(Singleton, cls).__new__(cls)  # Create a new instance
        return cls._instance  # Return the single instance

    def __init__(self, value=None):
        if not hasattr(self, 'initialized'):  # Check if the instance has been initialized
            self.value = value  # Initialize the value
            self.initialized = True  # Mark the instance as initialized

# Example usage
singleton1 = Singleton("First Instance")
print(singleton1.value)  # Output: First Instance

singleton2 = Singleton("Second Instance")
print(singleton2.value)  # Output: First Instance

print(singleton1 is singleton2)  # Output: True (both are the same instance)
