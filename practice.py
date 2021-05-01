# iterative
def binary_search(sequence, item):
    begin_index = 0
    end_index = len(sequence) - 1

    while begin_index <= end_index:
        midpoint = begin_index + (end_index - begin_index) // 2
        midpoint_value = sequence[midpoint]
        if midpoint_value == item:
            return midpoint

        elif item < midpoint_value:
            end_index = midpoint - 1

        else:
            begin_index = midpoint + 1

    return None


sequence_a = [2, 3, 4, 5, 6, 7, 8, 9, 10]
item_a = 1

print(binary_search(sequence_a, item_a))

# recursively


def binarysearch(data, low, high, item):
    if low <= high:
        middle = (low + high) // 2
        if data[middle] == item:
            return middle
        elif item < data[middle]:
            return binarysearch(data, low, middle-1, item)
        else:
            return binarysearch(data, middle+1, high, item)
    else:
        return -1


nums = [3, 5, 8, 15, 26, 38, 47, 136]

print(binarysearch(nums, 0, len(nums)-1, 122))
