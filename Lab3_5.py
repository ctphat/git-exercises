#!/usr/bin/python3

n = int(input("Enter number: "))
sum1 = 0
for i in range(1, n):
    if(n % i == 0):
        sum1 = sum1 + i
if (sum1 == n):
    print("True")
else:
    print("False")
