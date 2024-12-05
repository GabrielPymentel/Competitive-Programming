d = {
	"N": (0,1),
	"S":(0,-1),
	"E":(1,0),
	"W":(-1,0)
}
for i in range(int(input())):
	m,x,y = map(int , input().split())
	p = input()
	dist = (x+y)*2
	xa,ya = 0 , 0
	s = False
	while dist:
		for l in p:
			m,n = d[l]
			xa+=m
			ya+=n
			if xa == x and ya == y:
				s = True
				break
		dist-=1
	print("YES" if s else "NO")
