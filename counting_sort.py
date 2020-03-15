def count(a):
    n=len(a)
    output = [0 for i in range(n)]
   
    count = [0 for i in range(n)]
    for i in range(0,n):
        count[a[i]]=count[a[i]]+1
    for i in range(n):
        count[i]=count[i]+count[i-1]
    for i in range(n):
        output[count[a[i]]-1]=a[i]
        count[a[i]]=count[a[i]]-1
    for i in range(n):
        a[i]=output[i]
        
        
    
    
a=[2,3,2,1,0,7,2,6,8,0]
count(a)
print(a)
