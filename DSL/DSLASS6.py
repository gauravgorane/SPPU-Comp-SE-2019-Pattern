'''
Experiment No. 16 : Write a python program to store first year percentage of students in array. Write function for sorting array of floating point numbers in ascending order using quick sort and display top five scores.
'''

def partition(array, low, high):
    pivot = array[high]
    i = low - 1

    for j in range(low, high):
        if array[j] <= pivot:
            i = i + 1
            (array[i], array[j]) = (array[j], array[i])

    (array[i + 1], array[high]) = (array[high], array[i + 1])
    return i + 1

#<-------------------------------------------------->

def quickSort(array, low, high):
    if low < high:
        pi = partition(array, low, high)
        quickSort(array, low, pi - 1)
        quickSort(array, pi + 1, high)

#<-------------------------------------------------->

data = []
n = int(input("Enter number: "))
print("'After entering a number press enter'")
for i in range(n):
    x = int(input())
    data.append(x)
print("Unsorted Array: ", data)

size = len(data)

quickSort(data, 0, size - 1)

print('Sorted Array in Ascending Order: ', data)

print("Top five scores are: ", data[:-6:-1])
