def insertion_sort(list):
    n = len(list)
    for i in range(1, n):
        key = list[i]
        j = i - 1
        while j >= 0 and list[j] > key:
            list[j + 1] = list[j]
            j = j -1
        list[j+1] = key
        
    return list

result = insertion_sort([2, 4, 8, 23, 15, 80, 5])
for i in range(1, len(result)):
    print(result[i])