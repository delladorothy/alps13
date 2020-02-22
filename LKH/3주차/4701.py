n = int(input())
liq=list(map(int,input().split()))
min = abs(liq[0]+liq[1])

for i in range(n):
    for j in range(i+1,n):
        if min > abs(liq[i]+liq[j]):
            min = abs(liq[i]+liq[j])
            x=i
            y=j

print(liq[x],liq[y])

