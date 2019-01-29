N=int(input())
p=input().split()
scoreset=set()
scoreset.add(0)

for item in p:
    item=int(item)
    for score in scoreset.copy():
        scoreset.add(score+item)

print(len(scoreset))
