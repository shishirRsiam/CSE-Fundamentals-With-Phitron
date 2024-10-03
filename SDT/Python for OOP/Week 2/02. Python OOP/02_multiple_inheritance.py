# Base class 1
class Person:
    def __init__(self, name, age, address):
        self.name = name
        self.age = age
        self.address = address
    
    def display(self):
        print(f"Name: {self.name}, Age: {self.age}, Address: {self.address}.")

# Base class 2
class Employee:
    def __init__(self, emp_id, salary, role):
        self.emp_id = emp_id
        self.salary = salary
        self.role = role
    
    def display(self):
        print(f"Employee ID: {self.emp_id}, Role: {self.role}, Salary: ${self.salary}")

    def apply_raise(self, raise_amount):
        print(f"Old salary before raise: ${self.salary}")
        self.salary += raise_amount
        print(f"New salary after raise: ${self.salary}")

# Derived class inheriting from both Person and Employee
class Manager(Person, Employee):
    def __init__(self, name, age, address, emp_id, salary, role, department, team_size):
        # Initialize both base classes
        Person.__init__(self, name, age, address)
        Employee.__init__(self, emp_id, salary, role)
        self.department = department
        self.team_size = team_size

    def display(self):
        super().display()  # This will call Person's display method
        Employee.display(self)  # This will call Employee's display method
        print(f"Department: {self.department}, Team Size: {self.team_size}")

    def assign_task(self, task):
        print(f"{self.name} (Manager) is assigning task: {task} to team members.")

    def conduct_meeting(self):
        print(f"{self.name} is conducting a meeting for the {self.department} department.")

print('\n')

# Creating an object of Manager
manager = Manager(
    name="Sishir Siam", 
    age=21, 
    address="Lalmonirhat, Rangpur", 
    emp_id=1001, 
    salary=90000, 
    role="Team Leader", 
    department="IT", 
    team_size=10
)

# Displaying manager details
manager.display()
print('\n')

# Applying a raise to the manager's salary
manager.apply_raise(5000)
print('\n')

# Assigning a task
manager.assign_task("Prepare employee review reports")
print('\n')

# Conducting a meeting
manager.conduct_meeting()

print('\n')


"""
Name: Sishir Siam, Age: 21, Address: Lalmonirhat, Rangpur.
Employee ID: 1001, Role: Team Leader, Salary: $90000
Department: IT, Team Size: 10


Old salary before raise: $90000
New salary after raise: $95000


Sishir Siam (Manager) is assigning task: Prepare employee review reports to team members.


Sishir Siam is conducting a meeting for the IT department.
"""