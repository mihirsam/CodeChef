#PROBLEM : https://www.codechef.com/problems/CHRL4

def path(a, n):
    for i in range(n):
        if(a+k <= n):
            path(a+k, n)
        else:





n, k = input().split()
n = int(n)
k = int(k)
sn = []

temp = input()
for i in range(n):
    temp2 = int(temp[2*i])
    sn.append(temp2)

path(1, n)
