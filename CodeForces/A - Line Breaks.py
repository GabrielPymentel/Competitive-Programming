def solve():
	n,m = map(int, input().split())
	s = [len(input()) for x in range(n)]
	
	ans = 0
	x = 0
	for i in s:
		if ans + i <= m:
			ans+=i
			x +=1
		else:
			break
	print(x)
t = int(input())
 
for w in range(t):
	solve()
