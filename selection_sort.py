a=[5,6,1,0,2,7,3]
n=len(a)

for i in range(n):
    min=i
    for j in range(i+1,n):
        if(a[min]>a[j]):
            min=j
    a[min],a[i]=a[i],a[min]
print(a)
        
