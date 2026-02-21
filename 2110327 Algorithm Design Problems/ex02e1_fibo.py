def fibonacci(n) : 
    if n <= 1 : return n
    a = 1 
    b = 1
    for _ in range(n-2) : 
        tmp = a + b
        a = b
        b = tmp 
    return tmp

n = int(input())
print(fibonacci(n))