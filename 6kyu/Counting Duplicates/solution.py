from collections import Counter
def duplicate_count(text):
    # Your code goes here
    count = Counter(text.lower())
    res = 0
    for i in count:
        if count[i] > 1:
            res += 1
    return res
