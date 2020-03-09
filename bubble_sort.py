a=[3,6,1,2,9,0]
n=len(a)
for i in range(0,n+1):
    for j in range(0,n-i-1):
        if(a[j+1]<a[j]):
            a[j+1],a[j]=a[j],a[j+1]
print(a)
