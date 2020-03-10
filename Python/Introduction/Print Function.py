if __name__ == '__main__':
    n = int(input())

    op=0
    a=[]

    for i in range(n):
        op=0
        op+=(1+i)
        a.append(op)
        
    #print(a)
    for x in range(len(a)):
        print (a[x], end='',flush=True)