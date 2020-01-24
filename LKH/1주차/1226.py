lotto =list(map(int, input().split()))  #당첨번호

mynum =list(map(int, input().split()))

cnt = 0
for i in range(6):
    for j in range(6):
        if mynum[j] == lotto[i]:
            cnt += 1

if cnt==6:
    print("1")
if cnt==5:
    if lotto[6] in mynum:
        print("2")
    else:
        print("3")
if cnt==4:
    print("4")
if cnt==3:
    print("5")
elif cnt==2 or cnt ==1 or cnt == 0:
    print("0")