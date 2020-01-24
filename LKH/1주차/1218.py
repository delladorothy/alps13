a,b,c= map(int,input().split())
if c < a+b:
    if a ==b and b ==c:
        print("정삼각형")
    elif a==b or b==c or a==c:
        print("이등변삼각형")
    elif c*c== a*a+b*b:
        print("직각삼각형")
    else:
        print("삼각형")
else:
    print("삼각형아님")