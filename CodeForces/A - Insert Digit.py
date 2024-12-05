for i in range(int(input())):
    a = [x for x in input().split()]
    n,m = int(a[0]),a[1]
    l = [x for x in input()]
    kk = len(l)
    for _ in range(0,n):
        if int(m) > int(l[_]):
            l.insert(_,m)
            break
    if len(l) == kk:
        l.append(m)
    print("".join(l))
