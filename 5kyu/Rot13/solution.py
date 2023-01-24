def rot13(message):
    lower = 'abcdefghijklmnopqrstuvwxyz'
    upper = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    res = ''
    for i in message:
        if i.isalpha():
            swap = False
            for j in lower:
                if j == i and swap == False:
                    i = lower[(lower.index(i) + 13) % 26]
                    swap = True
            for j in upper:
                if j == i and swap == False:
                    i = upper[(upper.index(i) + 13) % 26]
                    swap = True
        res += i
    return res
