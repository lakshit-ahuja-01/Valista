def linear_search(array, value):
    for item in array:
        if item == value:
            return True
    return False

array = [1, 2, 3, 4, 5]
value = int(input())
print(linear_search(array, value))
