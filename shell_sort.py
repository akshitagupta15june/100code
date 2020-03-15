def shell(a,n):
    gap=n//2
    while gap>0:
        j=gap
        while j<n:
            i=j-gap
            while i>=0:
                if(a[i+gap]>a[i]):
                    break
                else:
                    a[i+gap],a[i]=a[i],a[i+gap]
                i=i-gap
            
            j=j+1
        gap=gap//2
    
        
            

a=[20,1,7,8,80,32,76,12,0]
n=len(a)
shell(a,n)
print(a)

