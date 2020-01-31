n = str(input())
sum = 0
for i in range(len(n)):
    sum+=int(n[i])
if sum % 3 ==0:
    print(1)
else:
    print(0)
