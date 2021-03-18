"""
PROJECT EULER - QN 6 - Sum square difference
Find the absolute difference between the sum of the squares of the first N natural numbers and the square of the sum.

Input:
T, test cases
N, the final natural number, i.e for square -> 1^2, 2^2....N^2

Output:
Absolute difference for each test case

Think of it mathematically,
1) the sum of squares of N natural number can be expressed as
[n(n+1)(2n+1)]/6
https://byjus.com/maths/sum-of-squares/

2) 1,2,3,....n is an arithmetic sequence which step is +1 throughout. -> series
    
And thus the sum of this arithmetic series can easily be expressed as 
(n(a1+an))/2
where n is number of terms, a1 is first term, an is last term

Lastly, number of terms is simply N as term starts from 1.
"""

import sys

def find_diff_of_sum_square(num):
    # (sum of numbers)^2 is always larger than sum of numbers^2
    sum_of_num_then_squared = ((num*(1+num))/2)**2
    sum_of_num_after_squared = (num*(num+1)*(2*num+1))/6
    print(int(sum_of_num_then_squared-sum_of_num_after_squared))
    
    
if __name__ == "__main__":
    # number of testcases, t
    t = int(input().strip())
    for a0 in range(t):
        n = int(input().strip())
        find_diff_of_sum_square(n)
        