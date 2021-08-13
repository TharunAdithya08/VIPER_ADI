l1=[None]
def add(l1):
    if(l1[0]==None):
        l1.pop(0)
    n=int(input("Enter the number u want to enter:"))
    l1.append(n)
    i=int(input("Do you want to add again?(YES::1)/(NO::0)"))
    if(i==1):
        add(l1)
    else:
        choice=main(l1)
        print(choice)
def delete(l1):
    if(l1[0]==None):
        print("Empty List")
    else:
        delval=int(input("Enter the value you want to delete from the list:"))
        l1.remove(delval)
        print(main(l1))
def main(l1):
    a=int(input("WHAT DO YOU WANT TO DO WITH THE LIST:\n0::CREATE 1::APPEND,2::DISPLAY,3::DELETE A SPECIFIC ELEMENT,4::EXIT--->"))
    if(a==0):
        add(l1)
    elif(a==1):
        add(l1)
    elif(a==2):
        print "The updated list is:",l1
        main(l1)
    elif(a==3):
        delete(l1)
    else:
        print("Thank You!\nFeel free to run the code again if you want to make new lists!")

main(l1)#calling the main driver funtion with the help of user defined functions

