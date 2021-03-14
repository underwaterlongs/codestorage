#!/bin/python3

import sys

t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    sum = 0
    i = n-1
    three_count = 0
    five_count = 0
    
    while (i > 0 and n-16 < i and i < n):

        if (i % 3 == 0 and three_count < 1):
            if ((i-3)%2 != 0):
                # odd diff -> even pairs case
                sum += int(((i//3)//2) * (i+3))
                three_count += 1
                print("sum at",i,"is ", sum)
            elif(i == 3):
                sum += i
                three_count += 1
                print("sum at",i,"is ", sum)
            else: 
                # even diff -> odd pairs case
                sum += (((i-3)//3)//2)*(i+3-3) + i
                three_count += 1
                print("sum at",i,"is ", sum)
                
        if (i % 5 == 0 and five_count < 1):
            if ((i-5)%2 != 0):
                # odd diff -> even pairs case
                sum += ((i//5)//2) * (i+5)
                five_count += 1
                print("sum at",i,"is ", sum)
            elif(i == 5):
                sum += i
                five_count += 1
                print("sum at",i,"is ", sum)
            else: 
                # even diff -> odd pairs case
                sum += (((i-5)//5)//2)*(i+5-5) + i
                five_count += 1
                print("sum at",i,"is ", sum)
                
        if (i % 15 == 0):
            if ((i-15)%2 != 0):
                # odd diff -> even pairs case
                sum -= ((i//15)//2) * (i+15)
                print("sum at",i,"is ", sum)
            elif(i == 15):
                sum -= i
                print("sum at",i,"is ", sum)
            else: 
                # even diff -> odd pairs case
                sum -= (((i-15)//15)//2)*(i+15-15) + i
                print("sum at",i,"is ", sum)

        i -= 1
    print(int(sum))



    
        
    