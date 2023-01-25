def find_outlier(integers):
    odd = []
    even = []
    for i in integers:
        if i % 2 == 0:
            even.append(i)
            if len(odd) > 1:
                return i
        else: 
            odd.append(i)
            if len(even) > 1:
                return i
        
    return even[0] if len(even) == 1 else odd[0]
