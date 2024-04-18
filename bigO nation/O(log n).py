import time


class Efficiency:
    def __init__(self):
        pass

    def generate_array(self, n):
        return [i for i in range(1, n)]

    def binary_search(self, arr, value):
        start_time = time.time()
        lowest_index = 0
        highest_index = len(arr) - 1

        while (lowest_index <= highest_index):
            middle_index = (lowest_index + highest_index) // 2
            if (arr[middle_index] < value):
                lowest_index = middle_index + 1
            elif (arr[middle_index] > value):
                highest_index = middle_index - 1
            else:

                print("the" + str(value) + " " +
                      "is found at index" + str(middle_index))
                lowest_index = middle_index + 1

    def buble_sort(self, arr):
        length = len(arr)
        for i in range(length - 1):
            for j in range(length - i - 1):
                if arr[i] > arr[j + 1]:
                    arr[j], arr[j + 1] = arr[j + 1], arr[j]
        print(arr)


obj = Efficiency()
arr = obj.generate_array(100)
start_time = time.time()
obj.binary_search(arr, 100)
end_time = time.time()

execution_time = end_time - start_time


start_time = time.time()


execution_time = end_time - start_time

print(f"Execution time: {execution_time} seconds")

start_time = time.time()
obj.buble_sort(arr)

print(arr)

execution_time = end_time - start_time
end_time = time.time()
print(end_time)
