#enter start No and End No
start = 
end = 

for i in range(start,end):
if i>1:
	for j in range(2,i):
		if(i % j==0):
			break
	else:
		print(i)
