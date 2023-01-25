from collections import Counter
def duplicate_encode(word):
    cnt = Counter(word.lower())
    res  = ''
    for i in word: 
        if cnt[i.lower()] > 1:
            res += ')'
        else: res += '('
    return res
