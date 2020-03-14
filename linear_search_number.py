def linear(a,n):
    flag=0
    for i in range(0,len(a)):
         if(a[i]==n):
             flag=1
             print("your element found at index",i)
    
    if(flag!=1):
         print("sorry, not found")

    
        
a=[2,7,8,9,2,1,0,14,15]
n=int(input("enter the value to be searched  "))
linear(a,n)
