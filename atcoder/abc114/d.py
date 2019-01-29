import numpy as np

n = int(input())

prime_count = [0]*110

for i in range(2, n+1):
    cur = i
    for j in range(2, n+1):
        while cur % j == 0:
            cur //= j
            prime_count[j] += 1


def num(m):
    return len(list(filter(lambda x: x >= m-1, prime_count)))


print(num(75)+num(25)*(num(3)-1)+num(15) *
      (num(5)-1) + num(5) * (num(5)-1) * (num(3)-2)//2)
