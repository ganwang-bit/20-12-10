import random
cout=3
while cout>0:
    temp=input("猜数字：")
    guess=int(temp)
    if guess==random.randint(1,10):
        print("猜对了")
        break
    else:
        if guess<8:
            print("小了")
        else :
            print("大了")
    cout=cout-1
print("游戏结束")
import random
i=0
while i<100:
        print(i,end=" ")
        i=i+1
print(" ")
i=1
while i<=9 :
    j=1
    while j<=i:
        print(j,"*",i,"=",j*i,end=" ")
        j+=1
    print(" ")
    i+=1
print(" ")
day=1
hour=1
while day<=7:
    while hour<=7:
        hour+=1
        print ("1")
        if hour>1:
            break
    day+=1
for i in range(1,101):
    for j in range(2,i):
	    if i%j==0:
		    print(i,"=",j,"*",i//j)
		    break
    else :
	    print(i,"是一个素数")
