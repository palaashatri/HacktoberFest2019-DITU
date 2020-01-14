
n=int(input("number:"))
p=1
for i in range(2,n+1):
    p*=i
print("output:",p)
=======
def factorial(num):
    if num==0:
        return 1
    else:
        return num*factorial(num-1)
num=int(input("Enter your number here:"))
factorial(num)
