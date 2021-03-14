import sys

t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    series = [1,1]
    while True:
        next_last = series[-1] + series[-2]
        if(next_last > n):
            break
        series.append(next_last)
    # we collect in steps of 3s as fib num pattern - even occurs every 3rd term
    evens = [series[x] for x in range(2,len(series),3)]
    print(sum(evens))
