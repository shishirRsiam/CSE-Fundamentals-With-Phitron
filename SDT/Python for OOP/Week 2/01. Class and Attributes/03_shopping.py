class Shopping():
    def __init__(self, name):
        # Initialize the shopping cart and customer's name
        self.curt = []  # Empty list to store items added to the cart
        self.name = name  # Customer's name
    
    def add_to_curt(self, product, price, quantity):
        # Add product information (name, price, quantity) to the shopping cart
        ProductInfo = {
            'product': product,  # Product name
            'price': price,      # Price of a single unit of the product
            'quantity': quantity # Quantity of the product to add
        }
        self.curt.append(ProductInfo)  # Add product info as a dictionary to the cart
    
    def show_curt(self):
        # Display the contents of the cart
        for Info in self.curt:  # Loop through each item in the cart
            print(Info)  # Print product details as a dictionary (product name, price, and quantity)
    
    def total_spend(self):
        # Calculate and return the total cost of the items in the cart
        total_spend = 0
        for Info in self.curt:  # Loop through the cart to calculate total cost
            total_spend += Info['price'] * Info['quantity']  # Multiply price by quantity for each product
        print(f'You Spend \'{total_spend} Taka\'.')  # Display the total amount spent
        return total_spend  # Return the total spend value
    
    def checkout(self, amount):
        # Handle the checkout process by comparing available amount with total spend
        total_spend = self.total_spend()  # Get the total amount spent by calling total_spend()

        if total_spend < amount:
            # If the amount the customer has is greater than the total spend, checkout is successful
            print(f"Checkout successful! You paid {amount} Taka and your change is {amount - total_spend} Taka.")
        else:
            # If the customer has insufficient money, checkout fails
            print(f"Checkout failed! You need {total_spend - amount} more Taka to complete the purchase.")


# Create a customer instance named "Sishir Siam"
Sishir = Shopping('Sishir Siam')

print('\n')
# Show the cart initially (it should be empty at first)
Sishir.show_curt()

# Add items to Sishir's cart
Sishir.add_to_curt('Laptop', 31500, 2)  # Add 2 Laptops, each costing 31500 Taka
Sishir.add_to_curt('HeadPhone', 1250, 5)  # Add 5 Headphones, each costing 1250 Taka
Sishir.add_to_curt('Charger', 1520, 1)  # Add 1 Charger, costing 1520 Taka

# Show the updated cart with added products
Sishir.show_curt()
print('\n')

# Calculate the total spend based on the items in the cart
Sishir.total_spend()
print('\n')

# Attempt to checkout with 50000 Taka (less than the total spend, so this should fail)
Sishir.checkout(50000)
print('\n')

# Attempt to checkout with 80000 Taka (more than the total spend, so this should succeed)
Sishir.checkout(80000)



"""
{'product': 'Laptop', 'price': 31500, 'quantity': 2}
{'product': 'HeadPhone', 'price': 1250, 'quantity': 5}
{'product': 'Charger', 'price': 1520, 'quantity': 1}


You Spend '70770 Taka'.


You Spend '70770 Taka'.
Checkout failed! You need 20770 more Taka to complete the purchase.


You Spend '70770 Taka'.
Checkout successful! You paid 80000 Taka and your change is 9230 Taka.
"""