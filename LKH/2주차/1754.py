str1,str2 = map(str,input().split())
if str1 > str2:
    str1,str2=str2,str1
print(str1+" "+str2)
