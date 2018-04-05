t = int(input())
arr = []
i = 0
#for i in range(0,t):
while(i<t):
    k = input()
    l = input()
    ans = input()

    if (l >= k):
        if(((l*4)+(k*4)) >= ans and ans >= (l*4) and (ans % 4) == 0):
            arr.append(1)
        else:
            arr.append(0)
    else:
        if(((k*4)+(l*4)) >= ans and ans >= (((k-(2*l))*4) + (l*4)) and (ans % 4) == 0):
            arr.append(1)

        else:
            arr.append(0)

    i += 1

for i in range(0,t):
    if(a[i]==1):
        print("yes")
    else:
        print("no")
