def solve():
    n,k = map(int , input().split())
    a = [int(x) for x in input().split()]
 
    
    if not a.count(0):
            print(0)
    else:
        rob,ans = 0,0
        for i in range(n):
            if rob and a[i] == 0:
                  rob-=1
                  ans+=1
            else:
                  if k <= a[i]:
                      rob+=a[i]
 
        print(ans)
t = int(input())
 
for i in range(t):
    solve()
