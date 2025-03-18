import uuid
from abc import ABC, abstractmethod

class User(ABC):
    def __init__(self, name, email):
        self.name = name
        self.email = email
        self.bank = None
    
    @abstractmethod
    def create_account():
        raise NotImplementedError

class Customer(User):
    def __init__(self, name, email, account_type):
        super().__init__(name, email)
        self.account_type = account_type
        self.balance = 0
        self.account_number = str(uuid.uuid4())
        self.transaction_history = []
        self.loan = 0
        self.loan_amount = 0
    
    def create_account(self, bank):
        self.bank = bank
        self.bank.users.append(self)
    
    def deposit(self, amount):
        if(amount > 0):
            self.balance += amount
            self.bank.balance += amount
            print(f'Deposit Successful. Updated Balance: {self.balance}.')
            self.transaction_history.append(f'DEPOSIT: {amount} | CURRENT: {self.balance}')
        else:
            print("Deposit Failed. Please, deposit positive amount.")
    
    def withdraw(self, amount):
        if(amount > self.balance):
            print("Withdrawl amount exceeded.")
        elif self.bank.bankrupt:
            print("Sorry, Bank has gone bankrupt.")
        else:
            self.balance -= amount
            self.bank.balance -= amount
            print(f'Withdrawl Successful. Updated Balance: {self.balance}.')
            self.transaction_history.append(f'WITHDRAWN: {amount} | CURRENT: {self.balance}')
    
    def view_balance(self):
        print(f'Your current balance is: ${self.balance}')

    def view_transaction_history(self):
        print("\n" + "="*40)
        print("       TRANSACTION HISTORY       ")
        print("="*40)
        
        if not self.transaction_history:
            print("No transactions found.")
        else:
            for index, history in enumerate(self.transaction_history, start=1):
                print(f"\nTransaction {index}:")
                print(f"  {history}")
                print("-" * 40)

        print("="*40)

    def take_loan(self, amount):
        if(self.loan < 2):
            self.bank.recieve_loan(amount, self)
        else:
            print("Sorry, loan limit exceeded.")

    def transfer(self, other, amount):
        if(amount > self.balance):
            print("Transfer amount exceeded.")
        elif self.bank.bankrupt:
            print("Sorry, Bank has gone bankrupt.")
        elif not other:
            print("Account does not exist.")
        elif amount <= 0:
            print("Transfer Failed. Please, transfer positive amount.")
        else:
            self.balance -= amount
            if(other.bank != self.bank): self.bank -= amount
            other.recieve_transfer(amount)
            print(f'Transfer Successful. Updated Balance: {self.balance}.')
            self.transaction_history.append(f'TRANSFERED: {amount} | CURRENT: {self.balance}')
    
    def recieve_transfer(self, amount):
        self.balance += amount
        self.bank.balance += amount
        self.transaction_history.append(f'RECIEVED: {amount} | CURRENT: {self.balance}')
        return f'Transfer Recieved Successfully. Updated Balance: {self.balance}.'
       
class Admin(User):
    def __init__(self, name, email):
        super().__init__(name, email)
        
    def create_account(self, bank):
        self.bank = bank
        self.bank.admins.append(self)
        
    def delete_user_account(self, account_number):
        index = 0
        for i, user in enumerate(self.bank.users):
            if user.account_number == account_number:
                index = i      
        self.bank.users.pop(index)
    
    def view_users(self):
        print("\n" + "-"*50)
        print(f"{'User Information':^50}")
        print("-"*50)

        for user in self.bank.users:
            print(f"""
{'='*50}
Name:           {user.name}
Email:          {user.email}
Balance:        {user.balance}
Account Number: {user.account_number}
Loan Amount:    {user.loan_amount}
{'='*50}
            """)
        print("-"*50) 

    def view_total_balance(self):
        print("Total balance of the bank:", self.bank.balance)
    
    def view_total_loan(self):
        print("Total Loan Amount of the bank:", self.bank.loan_amount)
    
    def switch_loan_feature(self, decision):
        self.bank.loan = decision