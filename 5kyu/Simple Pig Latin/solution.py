def pig_it(text):
    words = text.split(' ')
    res = ''
    for i in words:
        if i[0].isalpha() :
            i = i[1:] + i[0] + 'ay'
        res += i + ' '
    return res[:-1]
