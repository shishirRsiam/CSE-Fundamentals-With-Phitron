# Object-Oriented Programming (OOP)

Object-Oriented Programming (OOP) is a programming paradigm centered around the concept of "objects." 
These objects can represent real-world entities and are used to model and manage complex systems. 
OOP promotes greater flexibility and reusability in code, making it easier to develop and maintain applications.

<br>

## Four Main Concepts of OOP

### Encapsulation

- **Definition**: Encapsulation is the bundling of data (attributes) and methods (functions) that operate on the data into a single unit, called a class. 
It restricts direct access to some of the object's components, which helps prevent unintended interference and misuse.
- **Example**: Think of a `Person` class that has attributes like `name`, `age`, and `address`. You can create methods such as `updateAddress()` that allow you to change the address safely. 
The internal representation of `address` can remain hidden from outside code, ensuring that only the method can modify it.

### Abstraction

- **Definition**: Abstraction involves hiding the complex implementation details and showing only the necessary features of an object. 
It helps in reducing programming complexity and increasing efficiency.
- **Example**: If you have a `Car` class, you may have methods like `startEngine()` and `stopEngine()`. Users of the `Car` class don't need to know how the engine works; 
they just need to know that calling `startEngine()` will start the car.

### Inheritance

- **Definition**: Inheritance allows a new class (subclass) to inherit the properties and behaviors (methods) of an existing class (superclass). 
This promotes code reusability and establishes a relationship between classes.
- **Example**: If you have a base class called `Employee`, you can create subclasses like `Manager` and `Intern`. Both subclasses inherit common properties like `name` and `salary` from `Employee` but can also have their unique methods or attributes, like `manageTeam()` for `Manager`.

### Polymorphism

- **Definition**: Polymorphism allows objects to be treated as instances of their parent class. It enables one interface to be used for different underlying forms (data types). 
The most common use of polymorphism is through method overriding and method overloading.
- **Example**: Continuing with the `Employee` class, you might have a method called `calculatePay()`. The `Manager` class could override this method to include bonuses, while the `Intern` class might calculate pay based on hours worked. Both classes can use the same method name, but the implementation differs based on the object calling it.

## Summary

OOP allows programmers to create modular, maintainable, and reusable code by leveraging concepts like encapsulation, abstraction, inheritance, and polymorphism. 
These principles can be applied in many programming languages, such as Python, Java, and C++, to model real-world scenarios effectively.





<br>
<br>
<br>




# Object-Oriented Programming (OOP) Concepts Using Person Class

This document combines the main OOP concepts — Encapsulation, Abstraction, Inheritance, and Polymorphism — using the Person class.

<br>

## 1. Encapsulation

We’ll use private attributes (__name and __age) and provide getter and setter methods to safely interact with them.

```python
class Person:
    def __init__(self, name, age):
        self.__name = name  # Encapsulated (private) attribute
        self.__age = age    # Encapsulated (private) attribute

    # Getter for name
    def get_name(self):
        return self.__name

    # Setter for age (with validation)
    def set_age(self, age):
        if age > 0:
            self.__age = age
        else:
            print("Invalid age.")

    # Method to display person information
    def display_info(self):
        print(f"Name: {self.__name}, Age: {self.__age}")
        
# Usage
person = Person("Alice", 30)
person.display_info()
person.set_age(32)
person.display_info()
```

<br>

## 2. Abstraction

Here, we’ll create an abstract Person class that hides the implementation details, allowing for subclasses (e.g., Employee) to define specific behavior.

```python
from abc import ABC, abstractmethod

class Person(ABC):
    def __init__(self, name, age):
        self.__name = name
        self.__age = age

    # Abstract method for profession (must be implemented by subclasses)
    @abstractmethod
    def profession(self):
        pass

    # Display common information
    def display_info(self):
        print(f"Name: {self.__name}, Age: {self.__age}")

# Subclass of Person (Employee) that implements the abstract method
class Employee(Person):
    def __init__(self, name, age, job_title):
        super().__init__(name, age)
        self.job_title = job_title

    def profession(self):
        print(f"{self.get_name()} is working as a {self.job_title}.")

# Usage
employee = Employee("Bob", 28, "Software Engineer")
employee.display_info()
employee.profession()
```

<br>

## 3. Inheritance

We can create a subclass Employee that inherits common attributes and methods from the base class Person. It also extends the functionality by adding specific employee details.

```python
class Person:
    def __init__(self, name, age):
        self.__name = name
        self.__age = age

    # Getter for name
    def get_name(self):
        return self.__name

    # Common method to display info
    def display_info(self):
        print(f"Name: {self.__name}, Age: {self.__age}")

# Subclass Employee inherits from Person
class Employee(Person):
    def __init__(self, name, age, emp_id, salary):
        # Inherit attributes from Person
        super().__init__(name, age)
        self.emp_id = emp_id
        self.salary = salary

    # Additional method to display employee details
    def display_employee(self):
        print(f"Employee ID: {self.emp_id}, Salary: ${self.salary}")

# Usage
employee = Employee("Charlie", 35, 1023, 70000)
employee.display_info()  # Inherited from Person
employee.display_employee()
```

<br>

## 4. Polymorphism

Here, multiple Person subclasses (e.g., Employee and Student) will have a common method profession(), but each will behave differently based on the class.

```python
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def profession(self):
        pass  # Common interface, but will be overridden in subclasses

# Subclass Employee with a specific implementation of profession
class Employee(Person):
    def profession(self):
        print(f"{self.name} is a working professional.")

# Subclass Student with a specific implementation of profession
class Student(Person):
    def profession(self):
        print(f"{self.name} is a student.")

# Function to demonstrate polymorphism
def show_profession(person):
    person.profession()

# Usage
employee = Employee("David", 40)
student = Student("Eve", 20)

show_profession(employee)  # Output: David is a working professional.
show_profession(student)   # Output: Eve is a student.
```

<br>

## Full Example with All Concepts Combined

Here's a combined example using encapsulation, abstraction, inheritance, and polymorphism within a Person class and its subclasses:

```python
from abc import ABC, abstractmethod

# Base class (abstract) Person using encapsulation and abstraction
class Person(ABC):
    def __init__(self, name, age):
        self.__name = name
        self.__age = age

    # Getter for name
    def get_name(self):
        return self.__name

    # Setter for age
    def set_age(self, age):
        if age > 0:
            self.__age = age
        else:
            print("Invalid age.")

    # Abstract method for defining profession (to be implemented by subclasses)
    @abstractmethod
    def profession(self):
        pass

    # Method to display basic information
    def display_info(self):
        print(f"Name: {self.__name}, Age: {self.__age}")

# Employee subclass inheriting from Person
class Employee(Person):
    def __init__(self, name, age, emp_id, salary):
        super().__init__(name, age)  # Call the parent constructor
        self.emp_id = emp_id
        self.salary = salary

    # Implementing the abstract profession method
    def profession(self):
        print(f"{self.get_name()} is a working professional with Employee ID: {self.emp_id}.")

    # Method to display employee-specific information
    def display_employee(self):
        print(f"Employee ID: {self.emp_id}, Salary: ${self.salary}")

# Student subclass inheriting from Person
class Student(Person):
    def __init__(self, name, age, student_id):
        super().__init__(name, age)
        self.student_id = student_id

    # Implementing the abstract profession method
    def profession(self):
        print(f"{self.get_name()} is a student with ID: {self.student_id}.")

# Function to demonstrate polymorphism
def show_profession(person):
    person.profession()

# Usage
employee = Employee("Alice", 30, 1234, 50000)
student = Student("Bob", 20, 5678)

# Encapsulation: Display info and use profession (polymorphism)
employee.display_info()
employee.display_employee()
show_profession(employee)

student.display_info()
show_profession(student)
```

## Output:
```
Name: Alice, Age: 30
Employee ID: 1234, Salary: $50000
Alice is a working professional with Employee ID: 1234.
Name: Bob, Age: 20
Bob is a student with ID: 5678.
```

## Summary:
- **Encapsulation**: Protects attributes by using private variables (__name, __age).
- **Abstraction**: Uses an abstract Person class and abstract methods to hide implementation details.
- **Inheritance**: The Employee and Student classes inherit from Person and reuse its functionality.
- **Polymorphism**: Both Employee and Student implement the profession() method differently, demonstrating polymorphic behavior when passed to show_profession().
