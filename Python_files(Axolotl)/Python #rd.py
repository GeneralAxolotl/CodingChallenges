'''Generate Values and remove odd numbers'''
num=[]
for i in range(1,11):
    num.append(i)
print("The numbers 1-10",num)
for j,i in enumerate(num):
    if(i%2==1):
        del num[j]
print(num)