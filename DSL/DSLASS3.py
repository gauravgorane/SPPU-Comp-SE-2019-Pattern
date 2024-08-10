'''

Write a Python program to compute following computation on matrix:
a) Addition of two matrices B) Subtraction of two matrices
c) Multiplication of two matrices d) Transpose of a matrix

'''

import numpy as np

R1 = int(input("Enter the number of rows for 1st Matrix :"))
C1 = int(input("Enter the number of columns for 1st Matrix :"))

print("Enter the entries in a single line for 1st Matrix (separated by space) :")

# User input of entries in a
# single line separated by space
entries = list(map(int, input().split()))

# For printing the matrix
matrix1 = np.array(entries).reshape(R1, C1)

R2 = int(input("\nEnter the number of rows for 2nd Matrix :"))
C2 = int(input("Enter the number of columns for 2nd Matrix :"))

print("Enter the entries in a single line for 2nd Matrix (separated by space) :")

# User input of entries in a
# single line separated by space
entries = list(map(int, input().split()))

# For printing the matrix
matrix2 = np.array(entries).reshape(R2, C2)

print("\nFirst Matrix :\n", matrix1)
print("Second Matrix :\n", matrix2)

def add():
    M3 = matrix1 + matrix2
    return M3
def sub():
    M4 = matrix1 - matrix2
    return M4
def mul():
    M5 = matrix1 * matrix2
    return M5
def tran():
    M6 = matrix1.transpose()
    M7 = matrix2.transpose()
    print("Transpose of 1st Matrix :\n",M6)
    print("Transpose of 2nd Matrix :\n", M7)

flag = 1
while flag == 1:
    print("\n\n_____________Main Task___________")
    print("\n1 . Addition of two matrices")
    print("2 . Subtraction of two Matrices")
    print("3 . Multiplication of two Matrices")
    print("4 . Transpose of Input Matrix")
    print("5 . Exit")
    chr = int(input("\nEnter your choice number (from 1 to 5) :"))

    if chr == 1:
        print("\nAddition of two Matrices :\n", add())
        a = input("\nDo you want to continue (y/n) :")
        print("-------------------------------------------------------------------------")
        if a == "y":
            flag = 1
        else:
            flag = 0
            print("Thanks for using this program.")
            print("-------------------------------------------------------------------------")

    elif chr == 2:
        print("\nSubtraction of two Matrices :\n", sub())
        a = input("\nDo you want to continue (y/n) :")
        print("-------------------------------------------------------------------------")
        if a == "y":
            flag = 1
        else:
            flag = 0
            print("Thanks for using this program.")
            print("-------------------------------------------------------------------------")

    elif chr == 3:
        print("\nMultiplication of two Matrices :\n", mul())
        a = input("\nDo you want to continue (y/n) :")
        print("-------------------------------------------------------------------------")
        if a == "y":
            flag = 1
        else:
            flag = 0
            print("Thanks for using this program.")
            print("-------------------------------------------------------------------------")

    elif chr == 4:
        tran()
        a = input("\nDo you want to continue (y/n) :")
        print("-------------------------------------------------------------------------")
        if a == "y":
            flag = 1
        else:
            flag = 0
            print("Thanks for using this program.")
            print("-------------------------------------------------------------------------")
    elif chr == 5:
        flag = 0
        print("Thanks for using this program.")
        print("-------------------------------------------------------------------------")

    else:
        print(" Invalid Choice ")
        a = input("\nDo you want to continue (y/n) :")
        print("-------------------------------------------------------------------------")
        if a == "y":
            flag = 1
        else:
            flag = 0
            print("Thanks for using this program.")
            print("-------------------------------------------------------------------------")

