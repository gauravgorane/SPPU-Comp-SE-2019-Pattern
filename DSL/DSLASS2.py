'''

Write a Python program to store marks scored in subject “Fundamental of Data
Structure” by N students in the class. Write functions to compute following:
a) The average score of class
b) Highest score and lowest score of class
c) Count of students who were absent for the test
d) Display mark with highest frequency

'''

#<----------------------------------------------------------------------------->

# Function to calculate average score

def avg():
    total = 0
    length= 0
    for i in Stu:
        if (i != "ab"):
            total += i
            length += 1
    return total/length

#<----------------------------------------------------------------------------->

# Function to calculate high and low score

def high():
    ref = 0
    for i in list:
        if ref < i:
            ref = i
    return ref

def low():
    ref = 99999
    for i in list:
        if ref > i:
            ref = i
    return ref

#<----------------------------------------------------------------------------->

# Function to calculate no. of absent students

def abs():
    count = 0
    for i in Stu:
        if (i == "ab"):
            count += 1
    return count

#<----------------------------------------------------------------------------->

# Function to calculate largest marks frequency

def maxfreq():
    freq = [0]*len(list)
    for i in range(0, len(list)):
        currentfreq = 0
        for j in list:
            if list[i] == j:
                currentfreq+=1
        freq[i] = currentfreq
    print("The marks frequencies are", freq)

    max_freq = 0
    max_freq_index = 0
    for i in range(0, len(list)):
        if max_freq <= freq[i]:
            max_freq = freq[i]
            max_freq_index = i
    print("Maximum frequency is", max_freq, "for the score of", list[max_freq_index])

#<----------------------------------------------------------------------------->

# Function to calculate largest marks frequency

def maxFreq():
    a = {}
    for i in list:
        if i in a:
            a[i] += 1
        else:
            a[i] = 1

    print("{Marks: Occurence} : ", a)

#<----------------------------------------------------------------------------->

#Main Program

Stu=[]
Students = int(input("\nEnter number of students :"))
print("Enter marks of", Students, "students and for absent put ab (Press enter after put marks):")
for i in range (0,Students):
    name=input()
    if (name != "ab"):
        name = int(name)
    Stu.append(name)

print("\nThe Marks of Students are :", Stu)

#<----------------------------------------------------------------------------->

list = [] #filtered list without ab students
for i in Stu:
    if(i != "ab"):
        list.append(i)

#<----------------------------------------------------------------------------->

flag = 1

while(flag==1):
    print("\n\n_____________Main Task___________")
    print("1 . The average score of class")
    print("2 . Highest score and lowest score of class")
    print("3 . Count of students who were absent for the test")
    print("4 . Display mark with highest frequency")
    print("5 . Exit")
    choice= int(input("\nEnter your choice :"))

    if (choice==1):
        print("The Average Score of class :", avg())
        a = input("Do you want to continue (y/n) :")
        if a == "y":
            flag = 1
        else:
            flag = 0
            print("Thanks for using program.")

    elif (choice==2):
        print("Highest score of class is", high(), "\nLowest score of class is",low())
        a = input("Do you want to continue (y/n) :")
        if a == "y":
            flag = 1
        else:
            flag = 0
            print("Thanks for using program.")
        
    elif (choice==3):
        print("Numbers of Absent Students", abs())
        a = input("Do you want to continue (y/n) :")
        if a == "y":
            flag = 1
        else:
            flag = 0
            print("Thanks for using program.")
    
    elif (choice==4):
        maxfreq()
        print("\n")
        maxFreq()
        a = input("Do you want to continue (y/n) :")
        if a == "y":
            flag = 1
        else:
            flag = 0
            print("Thanks for using program.")

    elif (choice==5):
            flag = 0
            print("Thanks for using program.")

    else:
        print("Invalid choice")
        a = input("Do you want to continue (y/n) :")
        if a == "y":
            flag = 1
        else:
            flag = 0
            print("Thanks for using program.")