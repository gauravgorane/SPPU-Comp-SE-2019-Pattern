
marks=[]
n = int(input("Enter number of students whose marks are to be displayed : "))
for i in range(0, n):
    ele = float(input("Enter percentage for students :"))
    marks.append(ele) # adding the element
print("\nThe percentages of students are : ", marks)
Percentage = marks.copy()

#<------------------------------------------------------------>

def bubbleSort(array):
    for i in range(len(array)): 
        for j in range(0, len(array) - i - 1):
            if array[j] > array[j + 1]:
                array[j], array[j+1] = array[j+1], array[j]
 
    print('Sorted Array in Ascending Order:', array)
 
    print("Top five marks are : ", marks[len(array):len(array)-6:-1])

marks
print("\n---This by Bubble Sort---")
bubbleSort(marks)

#<------------------------------------------------------------>

def selectionSort(array):
    for step in range(len(array)):
        min_idx = step
        for i in range(step + 1, len(array)):
            if array[i] < array[min_idx]:
                min_idx = i
    (array[step], array[min_idx]) = (array[min_idx], array[step])
 
    print('Sorted Array in Ascending Order:', array)
    
Percentage
print("\n---This by Selection sort---")
selectionSort(Percentage)
