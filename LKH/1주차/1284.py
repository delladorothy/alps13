n = int(input())
i = 2
ans = []

while n!=1:
    if n% i ==0:
        n = n/i
        ans.append(i)
    else:
        i +=1

if len(ans)==2:
    print(ans[0], ans[1])
else:
    print("wrong number")