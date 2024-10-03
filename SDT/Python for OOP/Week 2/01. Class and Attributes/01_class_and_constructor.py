class Phone:
    def __init__(self, brand, model, price, owner):
        # Initializing the attributes of the Phone class with provided values
        self.brand = brand
        self.model = model
        self.price = price
        self.owner = owner
    
    def printInfo(self):
        # Method to print information about the phone
        print(f"Brand: {self.brand}, Model: {self.model}, Price: {self.price}, Owner: {self.owner}")
    
    def changeOwnerName(self, newOwnerName):
        # Method to change the owner's name of the phone
        self.owner = newOwnerName


# Creating an instance of the Phone class with specified attributes
Tecno = Phone("Tecno", "Camon 20", 19990, "Sishir Siam")

# Print the object reference (not human-readable details)
print(Tecno) 

# Print the details of the phone using the printInfo method
Tecno.printInfo()

# Directly changing the owner's name attribute
Tecno.owner = "Jisha Rahman"

# Print updated phone details
Tecno.printInfo()

# Changing the owner's name using the changeOwnerName method
Tecno.changeOwnerName("Jisha Sabrin")

# Print updated phone details again
Tecno.printInfo()


"""
<__main__.Phone object at 0x7f4b341b56d0>
Brand: Tecno, Model: Camon 20, Price: 19990, Owner: Sishir Siam
Brand: Tecno, Model: Camon 20, Price: 19990, Owner: Jisha Rahman
Brand: Tecno, Model: Camon 20, Price: 19990, Owner: Jisha Sabrin
"""