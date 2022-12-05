import random


def binary_search(array, key, min_index, max_index):
    if max_index <= min_index:
        return -1

    middle_index = (max_index + min_index) // 2
    middle_value = array[middle_index]
    if key < middle_value:
        return binary_search(array, key, min_index, middle_index)
    elif key > middle_value:
        return binary_search(array, key, middle_index + 1, max_index)
    else:
        return middle_index


if __name__ == '__main__':
    array = random.sample(range(100, 200), 70)
    array = sorted(array)

    value = 127
    check_index = array.index(value)
    found_index = binary_search(array, value, 0, len(array) - 1)
    print(f'found index = {found_index}, check index={check_index}')
