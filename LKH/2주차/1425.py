n,c = map(int,input().split())
student = list(map(int,input().split()))
student.sort()
for i in range(n):
    print(student[i],end=" ")
    if ((i+1)%c==0 and i !=0) or c ==1:
        print(" ")