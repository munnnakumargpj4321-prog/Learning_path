import random
import string

def genrate_pasword(length,numbers=True,special_characters=True):
    characters = string.ascii_letters
    if numbers:
        characters += string.digits
    if special_characters:
        characters += string.punctuation

    password = ''.join(random.choice(characters) for _ in range(length))
    return password

password_length = int(input("Enter the length of the password: "))
password = genrate_pasword(password_length)
print("Generated Password:", password)