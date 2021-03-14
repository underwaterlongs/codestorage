"""
PROJECT EULER - QN 76 - COUNTING SUMMATIONS
It is possible to write five as a sum in exactly six different ways:
4+1
3+2
3+1+1
2+2+1
2+1+1+1
1+1+1+1+1+1
How many different ways can N be written as a sum of at least two positive integers?
"""

"""
Utilize dynamic programming to memorize answers to smaller problems to feed to a larger problem

5 = (4+1)
5 = (3+2)
5 = 3+1(+1)
5 = 2+2(+1)
5 = 2+1+2(+1)
5 = 1+1+1+1+1(+1)

4 = (3+1)
4 = (2+2)
4 = 2+1(+1)
4 = 1+1+1(+1)

3 = 2+1
3 = 1+1+1

Pattern: with each step, num of ways to sum increases by 2 new ways plus the number of ways to sum the previous number 
"""


def count_num_of_ways_to_sum(num):

    # index i holds the answer to i+1 subproblem
    # we initialize a list of 0s
    num_ways_to_sum = [0] * (num + 1)
    
    # for 1, there is only 1 way to sum to 1
    num_ways_to_sum[0] = 1
    
    for i in range(1,num):
        for j in range(i,num+1):
            # num of ways to sum j includes all the ways to i
            # append ways to sum (j-i)
            num_ways_to_sum[j] += num_ways_to_sum[j-i]
    #account for large numbers
    num_ways_to_sum[num] %= 1000000007
    print(num_ways_to_sum[num])
            
if __name__ == "__main__":
    # number of testcases, t
    t = int(input().strip())
    for a0 in range(t):
        n = int(input().strip())
        count_num_of_ways_to_sum(n)
        
        