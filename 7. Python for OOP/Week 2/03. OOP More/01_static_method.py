class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    # Instance method
    def introduce(self):
        return f"Hi, my name is {self.name} and I am {self.age} years old."

    # Static method
    @staticmethod
    def is_adult(age):
        return age >= 18

# Example usage
person = Person("John", 30)
print(person.introduce())           # Output: Hi, my name is John and I am 30 years old.

# Calling static method without creating an instance
print(Person.is_adult(20))          # Output: True
print(Person.is_adult(16))          # Output: False
