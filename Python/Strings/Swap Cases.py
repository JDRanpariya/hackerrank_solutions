def swap_case(s):
    z=list(s)
    str =''
    for i in range(0,len(s)):
        if z[i].isupper()==1:
            x=z[i].lower()
            z[i]=x
        else:
            y=z[i].upper()
            z[i]=y
    return str.join(z)

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)