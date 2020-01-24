while(True):
    h,m=map(int,input().split())
    if(h>=0 and h <= 23 and m >= 0 and m <= 59):
        break


if (m-30)<0:
    m=m+30
    h=h-1
    if h == -1:
        h=23
else:
    m=m-30

print(h,m)