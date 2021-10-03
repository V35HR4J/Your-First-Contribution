def knapSack(W, wt, val, n):
    arr = [[0 for x in range(W + 1)] for x in range(n + 1)]
    for i in range(n + 1):
        for w in range(W + 1):
            if i == 0 or w == 0:
                arr[i][w] = 0
            elif wt[i-1] <= w:
                arr[i][w] = max(val[i-1] + arr[i-1][w-wt[i-1]],  arr[i-1][w])
            else:
                arr[i][w] = arr[i-1][w]
    for i in range(n, 0, -1):
        if arr[i][W] != arr[i-1][W]:
            print("Item ",i ,"with weight ", wt[i-1], "& value ", val[i-1], "is selected")
    print("Maximum possible value that can be accomodated in Knapsack is ", arr[n][W])
val = [10,5,15,7,6,18,3]
wt = [2,3,5,7,1,4,1]
W = 15
n = len(val)
knapSack(W, wt, val, n)
