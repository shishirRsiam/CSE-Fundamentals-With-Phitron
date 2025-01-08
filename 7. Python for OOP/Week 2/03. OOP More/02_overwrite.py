# Base class
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def introduce(self):
        return f"Hi, my name is {self.name} and I am {self.age} years old."

# Derived class that overwrites the introduce method
class Employee(Person):
    def __init__(self, name, age, job_title):
        super().__init__(name, age)
        self.job_title = job_title

    # Overwriting the introduce method
    def introduce(self):
        return f"Hi, my name is {self.name}, I am {self.age} years old and I work as a {self.job_title}."

# Example usage
person = Person("John", 30)
employee = Employee("Alice", 28, "Software Engineer")

print(person.introduce())    # Output: Hi, my name is John and I am 30 years old.
print(employee.introduce())  # Output: Hi, my name is Alice, I am 28 years old and I work as a Software Engineer.
