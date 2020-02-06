n,g=map(int,input().split())
a = list(map(int,input().split()))
ans=[]
min = a[0]
cnt = 0
for i in range(len(a)):
    if cnt % g == 0:
        min = a[i]
    if min > a[i]:
        ans.append(a[i])
    cnt+=1

for i in range(len(ans)):
    print(ans[i],end=" ")