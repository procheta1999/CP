l=[]
n=int(input("Enter range:"))
for i in range(0,n):
    el=int(input("enter element"))
    l.append(el)
k=int(input("enter k:"))
flag=0
for i in range(0,n):
    for j in range(i+1,n):
        if l[i]+l[j]==k:
            flag=1
            break
if flag==1:
    print("true")
else:
    print("false")
