arr = [3,1,2]
min_index = -1
max_index = -1
for i in range(1,len(arr)):
    if arr[i-1]>arr[i]:
        min_index = i-1
for i in range(1, len(arr)):
    if arr[len(arr)-i]<arr[len(arr)-i-1]:
        max_index = i

arr[max_index], arr[min_index] = arr[min_index], arr[max_index]

if sorted(arr) == arr:
    print("yes")
    print("swap ",min_index+1," ",max_index+1)
else:
    arr[max_index], arr[min_index] = arr[min_index], arr[max_index]
    inter_arr = arr[min_index+1:max_index]
    n_arr = arr[:min_index+1]+inter_arr+arr[max_index:]
    if sorted(arr) == n_arr:
        print("yes")
        print("reverse ",min_index+1," ",max_index+1)
    else:
        print("no")