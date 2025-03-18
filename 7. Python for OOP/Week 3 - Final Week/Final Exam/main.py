import time
from Bank import Bank
from Users import Customer, Admin

def display_menu():
    print('\n\n\n')
    print('🔥'*25)
    print("================================================")
    print("      Welcome to the Sishir's Bank System   ")
    print("================================================")
    print("Banking Operations:")
    print("1. Deposit Money")
    print("2. Withdraw Money")
    print("3. View Balance")
    print("4. View Transaction History")
    print("5. Take Loan")
    print("6. Transfer Money")

    print("\nAccount Management:")
    print("7. Delete User Account")
    print("8. View All Users")

    print("\nBank System Stats:")
    print("9. View Total Bank Balance")
    print("10. View Total Bank Loan")

    print("\nLoan Feature:")
    print("11. Switch Loan Feature")
    
    print("\n===================================")
    print("12. Exit")
    print("===================================")
    print("Please choose an option (1-12): ", end="")



def main():
    bank = Bank("Sishir's Bank", 19999999999999999999999999)
    
    siam = Customer("Siam Mondol", "siam@gmail.com", "savings")
    tushar = Customer("Tushar Ahmed", "tushar@gmail.com", "current")
    shishir = Customer("Sishir Rahman", "shishir@gmail.com", "current")
    
    adminSishir = Admin("AdminSishir", "adminshishir@gmail.com")
    
    siam.create_account(bank)
    tushar.create_account(bank)
    shishir.create_account(bank)
    adminSishir.create_account(bank)
    
    while True:
        display_menu()
        n = int(input("Enter an option: "))
        print("\n")
        time.sleep(1)
        if n == 1:
            deposit = int(input("Enter deposit amount: "))
            shishir.deposit(deposit)
        elif n == 2:
            withdraw = int(input("Enter withdraw amount: "))
            shishir.withdraw(withdraw)
        elif n == 3:
            shishir.view_balance()
        elif n == 4:
            shishir.view_transaction_history()
        elif n == 5:
            amount = int(input("Enter loan amount: "))
            shishir.take_loan(amount)
        elif n == 6:
            amount = int(input("Enter transfer amount: "))
            shishir.transfer(tushar, amount)
        elif n == 7:
            adminSishir.delete_user_account(tushar.account_number)
        elif n == 8:
            adminSishir.view_users()
        elif n == 9:
            adminSishir.view_total_balance()
        elif n == 10:
            adminSishir.view_total_loan()
        elif n == 11:
            decision = input("Do you want to switch loan feature? (y / n): ")
            if decision == 'y':
                adminSishir.switch_loan_feature(True)
            else:
                adminSishir.switch_loan_feature(False)
        elif n == 12:
            print("Thank you for using our services!")
            break

        print('✅'*25)
        time.sleep(2)

main()
