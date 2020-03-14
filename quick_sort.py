def quick(a,lb,ub):
    if(lb<ub):
        loc=partition(a,lb,ub)
        quick(a,lb,loc-1)
        quick(a,loc+1,ub)


def partition(a,lb,ub):
    pivot=a[lb]
    start=lb
    end=ub
    while start<end:
        while(a[start]<=pivot):
            start=start+1
        while(a[end]>pivot):
            end=end-1
        if(start<end):
            a[start],a[end]=a[end],a[start]
    a[lb],a[end]=a[end],a[lb]
    return end
        


a=[2,7,1,0,9,4,10]
n=len(a)
quick(a,0,n-1)
print(a)
