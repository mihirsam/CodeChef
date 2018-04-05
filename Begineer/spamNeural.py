# PROBLEM : https://www.codechef.com/problems/SPAMCLAS
def Spam():
    N, minX, maxX = input().split()
    N = int(N)
    minX = int(minX)
    maxX = int(maxX)
    w = []
    b = []
    s = 0
    ns = 0
    temp3 = 0

    for j in range(0,N):
        temp1, temp2 = input().split()
        temp1 = int(temp1)
        temp2 = int(temp2)
        w.append(temp1)
        b.append(temp2)

    j = 0
    for k in range(minX, maxX):
        x = k;
        for i in range(0,N):
            temp3 = (w[j] * x) + b[j]
            x = temp3
            j += 1

        j = 0
        if(int(temp3) % 2 == 0):
            ns += 1
        else:
            s += 1

    return s, ns


t = int(input("Enter The Number Of Test Cases : "))
s = []
ns = []

for i in range(0,t):
    n1, n2 = Spam()
    s.append(n1)
    ns.append(n2)


for i in range(0, t):
    print(s[i],"  ",ns[i])
