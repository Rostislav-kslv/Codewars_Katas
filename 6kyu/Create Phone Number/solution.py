def create_phone_number(n):
    #your code here
    i = 0
    s = ''
    while i <= 9:
        if i == 0:
            s += '('
        if i == 3:
            s += ') '
        if i == 6:
            s += '-'
        s += str(n[i])
        i += 1
    return s
