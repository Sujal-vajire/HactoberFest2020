def binary_search(arr, x):
    low = 0
    high = len(arr) - 1
    mid = 0

    while low <= high:

        mid = (high + low) // 2

        # Check if x is present at mid
        if arr[mid] < x:
            low = mid + 1

        # If x is greater, ignore left half
        elif arr[mid] > x:
            high = mid - 1

        # If x is smaller, ignore right half
        else:
            return mid

    # If we reach here, then the element was not present
    return "Not Found"


arr = eval(input("Enter the array:"))
arr.sort()
x = int(input("Enter the element to find:"))

# Function call
result = binary_search(arr, x)

print("Position Of The Element", x, "in sorted array", arr, "is", result+1)
