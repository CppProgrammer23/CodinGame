p,n,*r=open(0)
s={int(v):h for h,v in[x.split()for x in r]}
A="IMPOSSIBLE"
m=99
for v,h in s.items():
 if(v>int(p))*(v<m):m=v;A=h
print(A)
