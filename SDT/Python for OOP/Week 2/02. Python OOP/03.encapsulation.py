# Define a class Back to simulate a simple bank account
class Back():
    # The constructor (__init__) is used to initialize the class attributes when an object is created
    def __init__(self, name, address, initial_deposit) -> None:
        # Public attribute: name of the account holder
        self.name = name
        # Public attribute: address of the account holder
        self.address = address
        # Private attribute: balance, which is set to the initial deposit
        # The double underscore (__) before balance makes it private and prevents direct access from outside the class
        self.__balance = initial_deposit

    # Method to display basic account holder information
    def show_info(self):
        print(f"Name: {self.name}, Address: {self.address}.")

    # Method to display the current balance of the account
    def show_balance(self):
        # Notice the private attribute __balance is being accessed within the class
        print(f'{self.name}, Your Account Balance is: ${self.__balance}.')

    # Method to deposit money into the account
    def deposit(self, amount):
        # Add the deposit amount to the private balance attribute
        self.__balance += amount
        # Print a message indicating the amount deposited and the new balance
        print(f"Deposited ${amount}. Your new balance is: ${self.__balance}.")

# Create some space between output prints
print('\n')

# Create an object of the class Back for the account holder Sishir Siam with an initial deposit of 1000
SishirSiam = Back('Sishir Siam', 'Lalmonirhat, Rangpur', 1000)

# Call the method to show account holder's information (name and address)
SishirSiam.show_info()

# Call the method to display the account balance
SishirSiam.show_balance()

# Call the method to deposit an additional amount of 1005 into the account
SishirSiam.deposit(1005)

# Create some space between output prints
print('\n')


"""
Name: Sishir Siam, Address: Lalmonirhat, Rangpur.
Sishir Siam, Your Account Balance is: $1000.
Deposited $1005. Your new balance is: $2005.
"""