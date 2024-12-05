n = int(input())
for i in range(n):
	p1 , p2 = map(str, input().split())
	ps1 ,ps2 = list(p1) , list(p2)
	ps1[0],ps2[0] = p2[0],p1[0]
	print("".join(ps1),"".join(ps2))
