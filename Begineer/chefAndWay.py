#PROBLEM : https://www.codechef.com/problems/CHRL4
import numpy as np
import pandas as pd

def path(a, n, k):
    if(a+k < n):
        pathDiv(a, a+k, k)


def pathDiv(a, n, k):
    subPath = {}
    for i in range(a+1,n+1):
        subPath[i] = sn[a-1] * sn[i]



n, k = input().split()
n = int(n)
k = int(k)
sn = []

temp = input()
for i in range(n):
    temp2 = int(temp[2*i])
    sn.append(temp2)

path(1, n, k)
