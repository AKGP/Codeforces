a = raw_input()
b = raw_input()
x = int(a)
y = int(b)
z = x+y
z = str(z)
z = z.split("0")
a = a.split("0")
b = b.split("0")
a1 = ""
b1 = ""
z1 = ""
for i in range(len(a)):
	a1+=a[i]
for i in range(len(b)):
	b1+=b[i]
a1 = int(a1)
b1 = int(b1)
c1 = a1+b1
for i in range(len(z)):
	z1+=z[i]
z1 = int(z1)	
# print c1,z1
if c1==z1:
	print"YES"
else:
	print "NO"	
