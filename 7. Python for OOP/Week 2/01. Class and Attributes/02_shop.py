class Shop:
    def __init__(self, CustomerName):
        # Initialize the shopping cart and the customer's name
        self.Curt_List = []  # Empty list to store cart items
        self.CustomerName = CustomerName  # Customer's name
    
    def add_to_cart(self, item):
        # Method to add an item to the customer's cart
        self.Curt_List.append(item)  # Append item to the cart list


# Create an instance of Shop for Sishir Siam
SishirSiam = Shop("Sishir Siam")

# Add items to Sishir's cart
SishirSiam.add_to_cart("Phone")
SishirSiam.add_to_cart("Laptop")
SishirSiam.add_to_cart("Headphone")

# Print Sishir's cart list
print('Sishir\'s Curt List:', SishirSiam.Curt_List)

# Create another instance of Shop for Jisha Rahman
Jisha = Shop('Jisha Rahman')

# Add items to Jisha's cart
Jisha.add_to_cart('Sharee')
Jisha.add_to_cart('Hijab')
Jisha.add_to_cart('Makeup')

# Print Jisha's cart list
print('Jisha\'s Curt List:', Jisha.Curt_List)


"""
Sishir's Curt List: ['Phone', 'Laptop', 'Headphone']
Jisha's Curt List: ['Sharee', 'Hijab', 'Makeup']
"""