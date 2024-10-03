class Person:
    def __init__(self, name, age):
        # Private variables, conventionally indicated with an underscore (_)
        self._name = name  
        self._age = age    

    # Getter for name
    @property
    def name(self):
        # This method allows accessing _name like an attribute (e.g., person.name)
        return self._name

    # Setter for name
    @name.setter
    def name(self, new_name):
        # This method provides controlled access to modify _name, with validation
        if isinstance(new_name, str) and len(new_name) > 0:
            self._name = new_name
        else:
            raise ValueError("Name must be a non-empty string")

    # Getter for age
    @property
    def age(self):
        # This method allows accessing _age like an attribute (e.g., person.age)
        return self._age

    # Setter for age
    @age.setter
    def age(self, new_age):
        # This method provides controlled access to modify _age, with validation
        if isinstance(new_age, int) and new_age > 0:
            self._age = new_age
        else:
            raise ValueError("Age must be a positive integer")

# Example usage
person = Person("John", 30)

# Accessing name using getter
print(person.name)  # Output: John

# Modifying name using setter (automatically calls name.setter)
person.name = "Alice"
print(person.name)  # Output: Alice

# Accessing age using getter
print(person.age)  # Output: 30

# Modifying age using setter (automatically calls age.setter)
person.age = 25
print(person.age)  # Output: 25

# Trying to set invalid values will raise errors due to validation in setter:
# person.name = ""  # Raises ValueError: Name must be a non-empty string
# person.age = -5   # Raises ValueError: Age must be a positive integer

"""
Key Points:
1. Private Variables: Variables with an underscore (_name, _age) are considered private by convention.
2. Getter (@property): Allows access to private variables as if they were normal attributes (e.g., person.name).
3. Setter (@name.setter): Provides controlled, validated modification of private variables (e.g., person.name = "Alice").
4. Validation: Setters include validation to ensure proper values are assigned (e.g., non-empty string for name, positive integer for age).
"""
