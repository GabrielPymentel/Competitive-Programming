def calc(j,x):
	r = (5*(j**2)*x)//((x**2)+3*j*x-5*(j**2))
	return r
 
def solve():
	n = int(input())
	s = []
	for i in range(-10000,10001):
		if calc(n,i) == i:
			s.append(i)
	print(len(s))
	print(*s)
t = 1
 
for w in range(t):
	solve()
