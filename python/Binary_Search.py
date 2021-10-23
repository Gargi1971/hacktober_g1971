pos=-1
def binarysearch(l1,ele):
    l=0
    u=len(l1)-1
    while l<=u:
        mid=(l+u)//2
        if l1[mid]==ele:
            globals() ['pos']=mid
            return True
        elif l1[mid]>ele:
            u=mid-1
        else:
            l=mid+1
    return False

l1=[87,67,99,90,89]
l1.sort()                  # it is used because for binary search list must be sorted
ele=int(input("Enter the element to be searched for: "))
if binarysearch(l1,ele):
    print("Element is present at position: ",pos+1)
else:
    print("Element is not present ")
