print("The following programme shall return you the nth number in the Fibonacci sequence.")
def fibonacci(n):
   
    #0,1,1,2,3,5,8...

    if n<0:
        print("ERROR!")
    elif n==1 or n==0:
        return 0
    elif n==2:
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)
num=int(input("Which nth term of the fibonacci sequence do you wish to see:"))
fibonacci(num)
    
