n = int(input())
num = list(map(int,input().split()))
index = 0
ans = []
for i in range(n):
    for j in range(n):
        if num[i] > num[j]:
            index+=1
    ans.append(index)
    index = 0

for i in range(n):
    print(ans[i],end= " ")