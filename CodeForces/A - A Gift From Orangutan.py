for i in range(int(input())):
  a = int(input())
  sla = [int(x) for x in input().split()]
  b = [max(sla)]
  c = [max(sla)]
  for l in range(len(sla)-1):
    b.append(max(sla))
    c.append(min(sla))
  
  s = 0
  for l in range(0, len(b)):
    s+= b[l]- c[l]
  print(s)
