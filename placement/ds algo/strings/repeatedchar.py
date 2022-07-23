s = input()
arr = []
for i in range(0,len(s)):
    if(s[i] in arr):
        arr.remove(s[i])
    else:
        arr.append(s[i])
for i in range(len(arr)):
  print(arr[i],end='')
        