def solve():
	n,k = map(int ,input().split())
 
	l = [int(x) for x in input().split()]
 
	l.sort()
	l = l[::-1]
 
	if l[0] == k:
		print(0)
	else:
		ans = 0
		cont = 0
		subarray= []
		for i in range(0 , n):
			if ans + l[i] <= k:
				ans+=l[i]
				subarray.append(l[i])
			else:
				break
 
		
		print(k - sum(subarray))
 
t = int(input())
 
for w in range(t):
	solve()
