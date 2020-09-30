#enter start No and End No
start = 1000
end = 900

for i in range(start,end):
if i>1:
	for j in range(2,i):
		if(i % j==0):
			break
	else:
		print(i)
