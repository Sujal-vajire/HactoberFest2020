#!python3
#phone_email.py - a program that extracts phone numbers and email from a given string 
import pyperclip, re
phoneRegex = re.compile(r'\+?\d[\d\s-]{8,12}\d') #regex to extract phone numbers

emailRegex = re.compile(r'.*@.*\..*') #regex to extract email id

#copy string input from keyboard
text = str(pyperclip.paste())
matches=[]
for num in phoneRegex.findall(text):   #extract phone numbers from the text
    matches.append(num)

for mail in emailRegex.findall(text):   #extract email ids from the text
    matches.append(mail)
    
if len(matches)>0:                      #copies the extracted files into the clipboard
    pyperclip.copy('\n'.join(matches))
    print('copied to clipboard:')
    print('\n'.join(matches))
