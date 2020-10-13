#find greatest among three numbers using if else

a= int(input('Enter first number :'))
b= int(input('Enter second number :'))
c= int(input('Enter third number :'))

if b> a:
  if b>c:
    print("Greatest number:" , b)
  else:
    print("Greatest number:" , c)
else: #means a is greater than b
  if a>c:
    print("Greatest number:" , a)
  else: # means c is greater than a 
    print("Greatest number:" , c)
  
