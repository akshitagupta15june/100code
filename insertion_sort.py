a=[0,2,8,1,9,4]
n=len(a)
for i in range(1,n):
    temp=a[i]
    j=i-1
    while(j>=0 and a[j]>temp):
        a[j+1]=a[j]
        j=j-1
    a[j+1]=temp
print(a)
    
