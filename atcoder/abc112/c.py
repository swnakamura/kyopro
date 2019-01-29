N = int(input())
x=[]
y=[]
h=[]

for i in range(N):
    xb,yb,hb=map(int,input().split())
    print(xb)
    if hb!=0:
        x.append(xb)
        y.append(yb)
        h.append(hb)

for cx in range(101):
    for cy in range(101):
        top=h[0]+abs(cx-x[0])+abs(cy-y[0])
        isTop=True
        for i in range(1,N):
            if top-abs(cx-x[i])-abs(cy-y[i])!=h[i]:
                isTop=False
                break
        if isTop:
            print(cx,cy,top)
