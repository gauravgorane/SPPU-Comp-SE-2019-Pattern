
roll_no = []  # Creating a list

student_no = int(input("\nEnter the number of club members : "))  #Taking total number for roll number
print("\nEnter the roll number (Press enter after entering roll no. also write 01 for 1 and same for other) :")  #Entering the roll numbers

for i in range(0, student_no):  #Taking roll number from user
    ele = input()  # Whatever has been entered it takes as input 
    roll_no.append(ele)  #and then append it

print("\nEntered unsorted roll number list :",roll_no)  # List print

# <-------------------------------------------------------------------------------------------------------------------->

def insertion_sort(roll_no):  #function is define
    for i in range(1, len(roll_no)):  #Creating a insertion_sort from index 1 since first one we consider as min index value
        j = i 
        while roll_no[j - 1] > roll_no[j] and j > 0:
            roll_no[j-1], roll_no[j] = roll_no[j], roll_no[j - 1]
            print("Demo list", roll_no)  #<- use it for stepwise understanding
            j -= 1  #Important step because this make internal loop

insertion_sort(roll_no)  #function call
print("\nSorted roll number list", roll_no)  #printing the sorted list

# <-------------------------------------------------------------------------------------------------------------------->

def ternary_search(roll, x):  #function call for ternary search
    left = 0  #intialize the value of index from left of list 
    right = len(roll) - 1  #intialize the value of index from right of the list by substract 1 (by indexing rule)

    while left <= right:
        mid1 = left + (right - left) // 3  #formula for middle one from left also we use floor division for getting nearest whole no.
        mid2 = right - (right - left) // 3  #formula for middle one from right

        if x == roll[mid1]:  #if key is at mid1
            return mid1

        elif x == roll[mid2]:  #if key is at mid2
            return mid2

        elif x < roll[left] or x > roll[right]:  #exception condition for key carefully watch indexing is left and right
            return -1  

        elif x < roll[mid1]:  #if key is less than mid1
            right = mid1 - 1  #loop will run again for left=0 TO right=mid1-1

        elif x > roll[mid1] and x < roll[mid2]:  #if mid1 < key < mid2
            left = mid1 + 1  #loop will run again for left=mid1+1 TO right=mid2-1
            right = mid2 - 1

        else:
            left = mid2 + 1  #if key is greater than mid2 then loop will run again from left= mid2 + 1 TO right = len(roll) - 1  

    return -1  #if is out of syllabus then this will happen and return -1

# <-------------------------------------------------------------------------------------------------------------------->

roll_no  #calling list again
key = input("\nEnter the roll number for member of club or not :")  #accepting key from user
ans = ternary_search(roll_no, key)  #function call and store in ans for position

#as we return -1 condition for that this if_else condition 

if ans != -1:  #for not equal to -1  
    print(key, " is member of club at position ", ans+1)
else:  #for equal to 1
    print("\n",key, "is not a member of club")