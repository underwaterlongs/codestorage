#!/bin/python3

import math
import os
import random
import re
import sys
from datetime import datetime

# Complete the time_delta function below.
def time_delta(t1, t2):
    conv_t1 = datetime.strptime(t1, '%a %d %b %Y %H:%M:%S %z')
    conv_t2 = datetime.strptime(t2, '%a %d %b %Y %H:%M:%S %z')

    print(abs(conv_t1-conv_t2).total_seconds())
    
if __name__ == '__main__':
    t1 = 'Wed 29 Aug 2029 06:11:15 +0900'
    t2 = 'Thu 11 Sep 2217 22:45:23 +0630'
    delta = time_delta(t1, t2)

