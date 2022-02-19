a, n, d = [int(i) for i in input("Enter a, n, d : ").split()]
print("AP : ", end = " ")
for i in range(1, n + 1):
    print(a + (i - 1) * d, end = " ")
