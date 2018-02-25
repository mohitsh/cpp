#!/bin/python3

import sys






def minimumLoss(price):
    # Complete this function
    sell = [-1]*len(price)
    sell[-1] = price[-1]
    for i in range(len(price)-2, -1, -1):
        sell[i] = max(price[i], sell[i+1])

    print(price)
    print(sell)
    
    
if __name__ == "__main__":
    #n = int(input().strip())
    #price = list(map(int, input().strip().split(' ')))


    #result = minimumLoss(price)
    #print(result)

