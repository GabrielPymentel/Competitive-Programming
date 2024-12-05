for _ in range(int(input())):
  n = int(input())
  l = [int(x) for x in input().split()]
  c = 0
  sla = []
  for i in range(0,n):
    for j in range(i+1,n):
      if i!=j and i not in sla and j not in sla:
        if l[i] == l[j]:
          sla.append(i)
          sla.append(j)
          c+=1
  print(c)
