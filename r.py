import random

"This code is just to find if huy should wear black or white airforces"

r = random.randint(1, 10)

print("What color of airforces should huy wear today?")
print("Lets find out!")
if (r % 2) == 0:
    print("Black!")
else: 
    print("White!")
