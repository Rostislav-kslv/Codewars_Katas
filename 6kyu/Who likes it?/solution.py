def likes(names):
    string = ''
    if len(names) >= 4:
        string += names[0] + ", " + names[1] + " and " + str(len(names) - 2) + " others like this"
    
    elif len(names) == 3:
        string += names[0] + ", " + names[1] + " and "  + names[2] + " like this";
    
    elif len(names) == 2:
        string += names[0] + " and " + names[1] + " like this";
    
    elif len(names) == 1 :
        string += names [0] + " likes this";
    
    else: string += "no one likes this";
    return string;
