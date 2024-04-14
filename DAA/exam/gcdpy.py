def gcd(m, n):
  while n!=0:
    m,n = n, m%n
  return m
a,b = map(int,input().split())
print(gcd(a,b))