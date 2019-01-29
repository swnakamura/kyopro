import math
N,M=map(int,input().split())

maxv=M//N
ans=0

for i in range(1,int(math.sqrt(M))):
    if M%i==0:
        if i<=maxv:
            ans=max(ans,i)
        j=M//i
        if j<=maxv:
            ans=max(ans,j)

print(ans)
