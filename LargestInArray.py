
X = [[1,2],
    [4,5]]
Y = [[1,2],
    [6,7]]
result = [[0,0],
         [0,0,]]
for i in range(len(X)):
    for j in range(len(X[0])):
        result[i][j] = X[i][j] * Y[i][j]
for r in result:
   print(r)
