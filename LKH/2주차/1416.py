n = int(input())
ans=[]
if n == 1:
    ans.append(1)
while(n!=1):
    ans.append(n%2)
    n=n//2
    if n==1:
        ans.append(n)
for i in range(len(ans)-1,-1,-1):
    print(ans[i],end="")

