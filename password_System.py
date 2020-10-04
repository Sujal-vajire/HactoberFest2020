# this made to identify the username as a login system and enter password

username=input("Username:")

def security(username):
    if username == "rishabhnaik":
        password=input("Password:")
        if password == "coolguy":
            print("You are logged in")
        else:
            print("Incorrect password")
    else :
        print("Incorrect username")

security(username)
