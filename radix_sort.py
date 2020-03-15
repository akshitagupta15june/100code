def count(a,n,pos):
    
    output = [0 for i in range(n)]
   
    count = [0 for i in range(n)]
    for i in range(0,n):
        count[(a[i]/pos)%10]=count[(a[i]/pos)%10]+1
    for i in range(n):
        count[i]=count[i]+count[i-1]
    for i in range(n):
        output[count[(a[i]/pos)%10]-1]=a[i]
        count[(a[i]/pos)%10]=count[(a[i]/pos)%10]-1
    for i in range(n):
        a[i]=output[i]
        
        

def radix(a,n):
    maximum=max(a)
    pos = 1
    while maximum/pos>0:
        count(a,n,pos)
        pos*= 10

    
a=[2,3,2,1,0,7,2,6,8,0]
n=len(a)
radix(a,n)
print(a)
