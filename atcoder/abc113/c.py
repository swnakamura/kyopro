import numpy as np

N,M=map(int,input().split())
P=[0]*M
Y=[0]*M
ans=[0]*M
cityList=[[] for i in range(N)]

for i in range(M):
    P[i],Y[i]=map(int,input().split())

for i in range(M):
    cityList[P[i]-1].append((P[i],Y[i],i))

for i in range(N):
    cityList[i]=sorted(cityList[i])

for i in range(N):
    for j,item in enumerate(cityList[i]):
        ans[item[2]]="%06d%06d" % (item[0],j+1)

for i in range(M):
    print(ans[i])
