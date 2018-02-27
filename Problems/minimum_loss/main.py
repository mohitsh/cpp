#!/bin/python3

import sys

def BinSearchKth(arr, k):
    """
        find first occurance of a number greater than k
    """

    l = 0
    r = len(arr)-1
    loc = -1
    while(l<=r):
        mid = l + (r-l)//2
        if (k < arr[mid]):
            loc = mid
            r = mid-1
        else:
            l = mid+1  

    return loc

def ModifBinSearchKth(arr, k):
    """
        find first occurance of a number greater than k
    """

    l = 0
    r = len(arr)-1
    loc = -1
    while(l<=r):
        mid = l + (r-l)//2
        if (k < arr[mid]):
            loc = mid
            l = mid+1  
        else:
            r = mid-1

    return loc


def minimumLoss(price, n):
    # Complete this function
    sell = [-1]*len(price)
    sell[-1] = price[-1]
    for i in range(len(price)-2, -1, -1):
        sell[i] = max(price[i], sell[i+1])

    #print(price)
    #print(sell)

    profits = []    
    ans = None
    for i in range(n-1):
        current_buy = price[i]
        sell_options = sell[i+1:]
        ind = ModifBinSearchKth(sell_options, current_buy)
        if (ind + 1) < len(sell_options):
            max_profit = sell_options[ind+1] - current_buy
            if ans is None:
                ans = max_profit
            elif ans is not None and max_profit > ans:
                ans = max_profit
            #print(current_buy, ' -> ', max_profit, ' -> ', ans)

    return abs(ans)

    
if __name__ == "__main__":
    n = int(input().strip())
    price = list(map(int, input().strip().split(' ')))


    result = minimumLoss(price, n)
    print(result)

    """
    arr = [14, -10, 2, 108, 108, 243, 285, 285, 285, 401]
    arr.reverse()
    print(arr)
    ks = [10, 20, 100, 200, 300, 400, 500, 1000]
    for k in ks:
        ans = ModifBinSearchKth(arr, k)
        print("k: {0} ans: {1}".format(k, ans))
    """
