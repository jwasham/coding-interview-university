# In Python, a list is a dynamic array.
import sys
arr = []


def size(arr):
    return len(arr)


def capacity(arr):
    size = sys.getsizeof([])
    capacity = (sys.getsizeof(arr)-size)//8
    return capacity


def is_empty(arr):
    if not arr:
        return True
    return False


def at(index):
    if abs(index) < len(arr):
        return arr[index]
    raise Exception("Index Out of Range!")


def push_front(arr, data):
    arr.insert(0, data)


def pop_back(arr):
    d = arr.pop()
    return d


def delete(index):
    arr.pop(index)


def insert(n, arr, data):
    arr.insert(n, data)


def find(item, arr):
    for i in range(len(arr)):
        if(arr[i] == item):
            return i
    return -1


arr.append("he;;")
arr.append("llo")

if __name__ == '__main__':
    print("capacity of the list is:", capacity(arr))
    print("length of the list is :", len(arr))
    print("Empty: ", is_empty(arr))
    push_front(arr, "world")
    print(arr)
