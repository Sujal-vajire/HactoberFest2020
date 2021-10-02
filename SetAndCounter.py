# Function to Check if frequency of all characters 
# can become same by one removal 
from collections import Counter 

def allSame(input): 
	
	# calculate frequency of each character 
	# and convert string into dictionary 
	dict=Counter(input) 

	# now get list of all values and push it 
	# in set 
	same = list(set(dict.values())) 

	if len(same)>2: 
		print('No') 
	elif len (same)==2 and same[1]-same[0]>1: 
		print('No') 
	else: 
		print('Yes') 

	
	# now check if frequency of all characters 
	# can become same 
	
# Driver program 
if __name__ == "__main__": 
	input = 'xxxyyzzt'
	allSame(input) 
