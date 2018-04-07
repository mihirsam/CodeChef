#PROBLEM https://www.codechef.com/problems/SINS

testCase = int(input("Enter the number of test case : "))
result = []

def chocolateLeft(mel, ban):
    while(mel != ban or mel <= 0 or ban <= 0):
        if(mel > ban):
            mel = mel - ban
        elif(mel < ban):
            ban = ban - mel
        else:
            pass

    leftChocolate = mel + ban
    result.append(leftChocolate)


for i in range(testCase):
    mel, ban = input().split()
    mel = int(mel)
    ban = int(ban)
    chocolateLeft(mel, ban)

for i in result:
    print(i)
