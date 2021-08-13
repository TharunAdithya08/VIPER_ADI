a=int(input("Enter the first no.:"))
b=int(input("Enter the second no.:"))
i=1
j=1
if(a>b):
    while(i<=b):
        if(a%i==0 and b%i==0):
            temp=i
        i+=1
    print"The GCD of",a,"&",b,"is:",temp
elif(a<b):
    while (j <= a):
        if (a%j == 0 and b % j == 0):
            temp=j
        j+=1
    print"The GCD of",a,"&",b,"is:",temp
else:
    print"The GCD is:",a,"since both the numbers are the same!"