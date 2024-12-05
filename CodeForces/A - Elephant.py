n = int(input())
p = 0
if n >= 5:
  p+= n//5
  n %= 5
if n>=4:
  p+= n//4
  n %=4
if n >= 3:
  p+= n//3
  n%=3
if n >= 2:
  p+= n//2
  n%=2
p+= n//1
print(p)
