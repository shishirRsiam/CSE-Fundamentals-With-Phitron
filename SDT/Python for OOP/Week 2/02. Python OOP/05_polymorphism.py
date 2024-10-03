class Person:
    def __init__(self, name):
        self.name = name

    def introduce(self):
        """This method will be overridden in subclasses."""
        pass

class Student(Person):
    def __init__(self, name, major):
        super().__init__(name)
        self.major = major

    def introduce(self):
        return f"Hi, I'm {self.name} and I study {self.major}."

class Employee(Person):
    def __init__(self, name, position):
        super().__init__(name)
        self.position = position

    def introduce(self):
        return f"Hello, I'm {self.name} and I work as a {self.position}."

# Function to demonstrate polymorphism
def greet(person: Person):
    print(person.introduce())

# Create instances of Student and Employee
student = Student("Jisha Rahman", "Medical")
employee = Employee("Sishir Siam", "Software Engineer")

# Use the same interface to call the introduce method
greet(student)  # Output: Hi, I'm Jisha Rahman and I study Medical.
greet(employee) # Output: Hello, I'm Sishir Siam and I work as a Software Engineer.