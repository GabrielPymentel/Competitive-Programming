n = int(input())
for i in range(n):
	sla= int(input())
	p = list(input())
	n = []
	d = []
	for i in p:
		if 48 <= ord(i) <= 57:
			n.append(int(i))
		elif 97 <= ord(i) <= 122:
			d.append(i)
	dc = sorted(d)
	nc = sorted(n)
	dt = False
	nt = False
	ks = False
	if "".join(dc) in "".join(p):
		dt = True
	if "".join(str(s) for s in nc) in "".join(p):
		nt = True
	if d:
		if "".join(p).find(d[0])-1 >=0:
			if 48 <=ord(p["".join(p).find(d[0])-1]) <= 57 :
				ks = True
	if len(p) == len(d) and dt:
		print("YES")
	elif len(p) == len(n) and nt:
		print("YES")
	elif dt and nt and ks:
		print("YES")
	else:
		print("NO")