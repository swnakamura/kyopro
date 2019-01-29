H, W, K = map(int, input().split())

ans = [0]*W
buf = [0]*W

fibonacci = [1]*(W+1)

for i in range(2, W+1):
    fibonacci[i] = fibonacci[i-1]+fibonacci[i-2]

ans[0] = 1

if W==1:
    print(1)
else:
    for i in range(H):
        buf[0] = ans[0]*fibonacci[W-1]+ans[1]*fibonacci[W-2]
        buf[W-1] = ans[W-1]*fibonacci[W-1]+ans[W-2]*fibonacci[W-2]
        for j in range(1, W-1):
            buf[j] = ans[j-1]*fibonacci[j-1]*fibonacci[W-j-1] + \
                ans[j]*fibonacci[j] * fibonacci[W-j-1] +\
                ans[j+1]*fibonacci[j]*fibonacci[W-j-2]

        for j in range(W):
            ans[j] = buf[j]%1000000007

    print(ans[K-1])
