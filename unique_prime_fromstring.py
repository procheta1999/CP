def isPrime(n):
    if n<2:
        return False
    for i in range(2,int(n/2)):
        if(n%i==0):
            return False
    return True

def arePrime(s):
    for i in range(0,len(s)):
        if not isPrime(s[i]):
            return False
    return True        


def splitNum(s):
    assert ',' not in s
    count=0
    numSplits=[]
    i=0
    while i< 2**(len(s)-1):
        splits=[]
        b=str(bin(i))[2:]
        b="0"*(len(s)-len(b)-1)+b+"0";
        p=0
        r=" "
        while p<len(s):
            r=r+s[p]
            if b[p]=="1":
                r=r+","
            p=p+1
        splits=[int(x) for x in r.split(",")]
        numSplits.append(splits)
        i=i+1
    for i in range(0,len(numSplits)):
        if (arePrime(numSplits[i])):
            count=count+1
    return count

s=input("Enter s:")
result=splitNum(s)
print(result)

        
