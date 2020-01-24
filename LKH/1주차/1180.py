n=int(input())
n//10
ans=((n%10)*10+n//10)*2
if ans > 100:
    ans= ans-100
if ans <=50:
    print(ans)
    print("GOOD")
else:
    print(ans)
    print("OH MY GOD")