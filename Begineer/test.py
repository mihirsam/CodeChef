"""
x = input()[0].split()
y = input()
z = input()

x = int(x[0])
print(x, y, z)
"""

n = 3
sn = []

temp = input()
for i in range(n):
    temp2 = int(temp[2*i])
    sn.append(temp2)

print(sn)
