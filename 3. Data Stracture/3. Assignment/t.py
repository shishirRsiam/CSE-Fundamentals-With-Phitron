def who_will_win(a, b):
    # Check if the sum of coins is even or odd
    total_coins = a + b
    if total_coins % 2 == 0:
        return "Bob"  # Bob will win if the total is even
    else:
        return "Alice"  # Alice will win if the total is odd

# Input the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    # Input the number of coins in Alice's and Bob's wallets
    a, b = map(int, input().split())

    # Output the winner for each test case
    print(who_will_win(a, b))
