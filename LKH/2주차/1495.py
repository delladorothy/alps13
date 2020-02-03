n,m,k=map(int,input().split())
d=[[0]*n for i in range(m)]

for i in range(k):
    x1,y1,x2,y2,u = map(int,input().split())
    d[x1][y1] = d[x1][y1] + u
    d[x2 + 1][y2 + 1] = d[x2 + 1][y2 + 1] + u
    d[x1][y2 + 1] = d[x1][y2 + 1] - u
    d[x2 + 1][y1] = d[x2 + 1][y1] - u

for i in range(n):
    for j in range(m):
        print(d[i][j],end=" ")
    print()

#누적합?