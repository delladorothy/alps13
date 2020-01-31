n = int(input())
ans = list(map(int,input().split()))
m = int(input())
my = list(map(int,input().split()))
for i in range(m):
    if my[i] in ans:
        print(1,end=" ")
    else:
        print(0,end=" ")