
a = 0
b = 1
c = 0

print("Febonacci series")

print(a,end="\t")

print(b,end="\t")

for itr in range(0,3):
    c= a+b
    print(c,end="\t")

    a=b
    b=c
