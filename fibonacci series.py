n=int(input("Enter the number upto which you want to find the series:"))
a=0
b=1
i=0
print(a)
print(b)
while(i<n-2):
    c=a+b
    if(c<=n):
        print(c)
        a=b
        b=c
    else:
        print("End of loop!")
        break
    i+=1

