def present(arr1, arr2, x, y):
    for i in range(x):
        for j in range(y):
            if (arr1[i] == arr2[j]):
                break
            if (j == y - 1):
                print(arr1[i], end=" ")

a = [1, 2, 3, 4, 5, 10]
x = len(a)
b = [2, 3, 1, 0, 5]
y = len(b)
print("Elements Which Are Present In First Array And Not In Second:", end=" ")
present(a, b, x, y)
