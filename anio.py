#/user/bin python3
a=1949
print ("Los años biciestos entre 1950 y 2050 son : \t")
for a in range(1949,2051):
	if((a%4==0 and a%100!=0) or a%400==0):
		print(a)
