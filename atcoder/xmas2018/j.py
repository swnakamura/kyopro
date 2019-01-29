japdict = {
    '〇': '0',
    '一': '1',
    '二': '2',
    '三': '3',
    '四': '4',
    '五': '5',
    '六': '6',
    '七': '7',
    '八': '8',
    '九': '9',
    '十': '*10',
    '千': '*1000',
}

s = list(input())
buflist = []
ans = 1
string=''
for item in s:
    buf = 0
    if item in japdict:
        string += japdict[item]
    elif item == '万':
        buf += int(string)*10000
        string = ''
    elif item == '億':
        buf += int(string)*100000000
        string = ''
    elif item == 'の':
        buf+=int(string)
        string = ''
        buflist.append(buf)
    elif item == '乗':
        if string != '':
            buf+=int(string)
            string = ''
        buflist.append(buf)
        for i in range(buflist[-1]):
            ans *= buflist[-2]
            ans %= 1000000009
        buflist=buflist[:-2]
        buflist.append(ans)
        ans=1
print(ans)
