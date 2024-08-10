'''

Experiment No. 1 : In a second year computer engineering class, group A students play cricket, group B students play badminton and group C students play football. Write a python program using functions to compute following:

a) List of students who play both cricket and badminton.
b) List of students who play either cricket or badminton but not both.
c) Number of students who play neither cricket nor badminton.
d) Number of students who play cricket and football but not badminton.
(NOTE : While realising the group, duplicate entries should be avoided. Do not use SET built-in functions)

'''

#<----------------------------------------------------------------------------------------------->

# Function for finding List of students who play both cricket and badminton

def CB(lst1,lst2):
    lst3=intersection(lst1,lst2)
    return lst3

# Function for finding intersection between two sets (A & B)

def intersection(lst1,lst2):
    lst3=[]
    for val in lst1:
        if val in lst2:
            lst3.append(val)
            return lst3

#<---------------------------------------------------------------------------------------->

# Function for finding List of students who play either cricket or badminton but not both

def eCeBn(lst1,lst2):
    lst3=two_diff(lst1,lst2)
    return lst3

# Function for finding two difference of two sets (A - B, B - A)

def two_diff(lst1,lst2):
    lst3=[]
    D1=diff(lst1,lst2)
    print("Difference between Cricket and Badminton (C-B) is : ", D1)
    D2=diff(lst2,lst1)
    print("Difference between Badminton and Cricket (B-C) is : ", D2)
    lst3=union(D1,D2)
    return lst3

# Function for finding difference between two sets (A-B)

def diff(lst1,lst2):
    lst3=[]
    for val in lst1:
        if val not in lst2:
            lst3.append(val)
    return lst3

# Function for finding union of two sets (A U B)

def union(lst1,lst2):
    lst3=lst1.copy()
    for val in lst2:
        if val not in lst3:
            lst3.append(val)
    return lst3
#<---------------------------------------------------------------------------------------------->

# Function for finding Number of students who play neither cricket nor badminton

def nCnB(lst1,lst2,lst3):
    lst4=diff(lst1,union(lst2,lst3))
    return len(lst4)
#<---------------------------------------------------------------------------------------------->

# Function for finding Number of students who play cricket and football but not badminton

def CFnB(lst1,lst2,lst3):
    lst4=diff(intersection(lst1,lst2),lst3)
    return len(lst4)
print("------------------------------------------------------------------------------------------")

# Main Program

# List of all Students

SEComp = []
n = int(input("\nEnter number of second year engineering class students :"))
print("\nEnter the name of", n ,"students (Please press enter after entering the student name)")
for i in range (0,n):
    ele = input()
    SEComp.append(ele)
print("\nList of second year engineering class students :", SEComp)

print("------------------------------------------------------------------------------------------")

# List of Students who play cricket

Cricket = []
n = int(input("\nEnter number of students who play cricket :"))
print("\nEnter the name of", n ,"students who play cricket (Please press enter after entering the student name)")
for i in range (0,n):
    ele = input()
    Cricket.append(ele)
print("\nList of students who play cricket :", Cricket)

print("------------------------------------------------------------------------------------------")

# List of Students who play batminton

Batminton = []
n = int(input("\nEnter number of students who play batminton :"))
print("\nEnter the name of", n ,"students who play batminton (Please press enter after entering the student name)")
for i in range (0,n):
    ele = input()
    Batminton.append(ele)
print("\nList of students who play batminton :", Batminton)

print("------------------------------------------------------------------------------------------")

# List of Students who play football

Football = []
n = int(input("\nEnter number of students who play football :"))
print("\nEnter the name of", n ,"students who play football (Please press enter after entering the student name)")
for i in range (0,n):
    ele = input()
    Football.append(ele)
print("\nList of students who play football :", Football)
print("------------------------------------------------------------------------------------------")

# Main Task

flag = 1

while flag == 1:
    print("\n\n_____________Main Task___________")
    print("\n1 . List of students who play both cricket and badminton.")
    print("2 . List of students who play either cricket or badminton but not both.")
    print("3 . Number of students who play neither cricket nor badminton.")
    print("4 . Number of students who play cricket and football but not badminton.")
    print("5 . Exit")
    chr = int(input("\nEnter your choice number (from 1 to 5) :"))

    if chr == 1:
        print("\nList of students who play both cricket and badminton : ", CB(Cricket, Batminton))
        a = input("\nDo you want to continue (yes/no) :")
        print("------------------------------------------------------------------------------------------")
        if a == "yes" :
            flag = 1
        else:
            flag = 0
            print("Thanks for using this program.")
            print("------------------------------------------------------------------------------------------")
            
    elif chr == 2:
        print("List of students who play either cricket or badminton but not both :",eCeBn(Cricket, Batminton))
        a = input("\nDo you want to continue (yes/no) :")
        print("------------------------------------------------------------------------------------------")
        if a == "yes" :
            flag = 1
        else:
            flag = 0
            print("Thanks for using this program.")
            print("------------------------------------------------------------------------------------------")

    elif chr == 3:
        print("Number of students who play neither cricket nor badminton :",nCnB(SEComp, Cricket, Batminton))
        a = input("\nDo you want to continue (yes/no) :")
        print("------------------------------------------------------------------------------------------")
        if a == "yes" :
            flag = 1
        else:
            flag = 0
            print("Thanks for using this program.")
            print("------------------------------------------------------------------------------------------")

    elif chr == 4:
        print("Number of students who play cricket and football but not badminton :", CFnB(Cricket, Football, Batminton))
        a = input("\nDo you want to continue (yes/no) :")
        print("------------------------------------------------------------------------------------------")
        if a == "yes" :
            flag = 1
        else:
            flag = 0
            print("Thanks for using this program.")
            print("------------------------------------------------------------------------------------------")
            
    elif chr == 5:
        flag = 0
        print("Thanks for using this program.")
        print("------------------------------------------------------------------------------------------")

    else:
        print(" Invalid Choice ")
        a = input("\nDo you want to continue (yes/no) :")
        print("------------------------------------------------------------------------------------------ ")
        if a == "yes" :
            flag = 1
        else:
            flag = 0
            print("Thanks for using this program.")
            print("------------------------------------------------------------------------------------------")
