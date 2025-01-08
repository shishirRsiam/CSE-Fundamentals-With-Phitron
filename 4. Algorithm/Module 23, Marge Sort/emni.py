def countAndSay(n):
    if n == 1:
        return "1"
    prev = countAndSay(n - 1)
    result = ""
    count = 1
    for i in range(len(prev)):
        if i + 1 < len(prev) and prev[i] == prev[i + 1]:
            count += 1
        else:
            result += str(count) + prev[i]
            count = 1
    return result

# Example usage:
n = 30
print(countAndSay(n))  # Output: 111221
