a,b =raw_input().split()
s = ""
for i in range(int(a),int(b)+1):
	s+=str(i)
# li = map(int,list(s));
c = 0
# d = {0:0,1:0,2:0,3:0,4:0,5:0,6:0,7:0,8:0,9:0}

for i in s:
	if i=="1":
		c+=2
	if i=="2":
		c+=5
	if i=="3":
		c+=5
	if i =="4":
		c+=4
	if i =="5":
	    c+=5
	if i =="6":
	    c+=6
	if i=="7":
	    c+=3
	if i=="8":
	    c+=7
	if i=="9":
	    c+=6
	if i=="0":
	    c+=6
print c	                        				