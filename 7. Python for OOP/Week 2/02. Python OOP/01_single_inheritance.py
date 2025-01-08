# Base class
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    
    def display(self):
        print(f"Name: {self.name}, Age: {self.age}")

# Derived class inheriting from Person
class Employee(Person):
    def __init__(self, name, age, emp_id, salary):
        # Call the constructor of the Person class
        super().__init__(name, age)
        self.emp_id = emp_id
        self.salary = salary

    def display(self):
        # Call the display method of the Person class
        super().display()
        print(f"Employee ID: {self.emp_id}, Salary: ${self.salary}")

print('\n')
# Creating an object of Employee
employee = Employee("Sishir Siam", 21, 1001, 50000)

# Display employee details
employee.display()

print('\n')


"""
Name: Sishir Siam, Age: 21
Employee ID: 1001, Salary: $50000
"""