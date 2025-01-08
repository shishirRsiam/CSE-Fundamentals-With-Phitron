"""
In Python, an interface is a concept that defines a contract for classes to implement certain methods, ensuring that they provide specific functionality. 
While Python does not have a formal interface construct as seen in some other languages (like Java), you can achieve similar functionality using abstract base classes (ABCs) from the abc module.
"""

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
    def get_name(self):
        return self.__name

# Subclass of Person (Employee) that implements the abstract method
class Employee(Person):
    def __init__(self, name, age, job_title):
        super().__init__(name, age)
        self.job_title = job_title

    def profession(self):
        print(f"{self.get_name()} is working as a {self.job_title}.")

# Usage
employee = Employee("Sishir Siam", 21, "Software Engineer")
employee.display_info()
employee.profession()


"""
Name: Sishir Siam, Age: 21
Sishir Siam is working as a Software Engineer.
"""