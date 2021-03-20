"""
The prime factors of 13,195 are 5,7,13,29.

What is the largest prime factor of a given number ?

We can utilize Sieve of Eratosthenes to find the prime factors for N up to ~10mil  or so efficiently.

General pseudocode for sieve:
initialize an array of Boolean values indexed by 2 to N, set to True

i = 2
for i to sqrt(n) do
    if(arr[i]==True):
        for j = i^2, i^2+i, i^2+2i.... to n do
            a[j] = False

p^2: 2^2, 3^2, 4^2 -> for this p in 2 to sqroot(num), we mark this as the non prime factors by switching it to False. Thus remaining numbers in the range are prime and remain True

We can modify this concept to find factors instead.
"""

import math
import sys


def find_largest_prime_factor(num):
    largest_prime_factor = 0    
    
    # check for divisibility by 2, if so -> divide till only 1 or some other non-2  factors are left
    while(num%2 == 0):
        num //= 2
        largest_prime_factor=2

    for i in range(3,int(math.sqrt(num)+1),2):
        while (num%i==0):
            num //= i
            largest_prime_factor = int(i)
        
    if(num>=2):
        largest_prime_factor = int(num)

    print(largest_prime_factor)
      
    
if __name__ == "__main__":
    # number of testcases, t
    t = int(input().strip())
    for a0 in range(t):
        n = int(input().strip())
        find_largest_prime_factor(n)