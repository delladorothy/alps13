a,b=map(int,input().split())
max = a+b
if max < b+a:
    max = b+a
if max < a-b:
    max = a-b
if max < b-a:
    max = b-a
if max < a*b:
    max = b*a
if max < b*a:
    max = b*a
if max < a/b:
    max = b/a
if max < b/a:
    max = b/a
if max < a**b:
    max = a**b
if max < b**a:
    max = b**a

print("%f" %max)