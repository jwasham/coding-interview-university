# Binary Search Algorithm Implemented in Python
# Sample set of numbers ; You can change the this array
a = [1, 4, 5, 8, 10, 12, 15, 17, 19, 20, 23, 27, 31, 33, 37, 43, 45]


def isEven(num):
    return num % 2 == 0


def check(array, start, end, num):
    t = len(array) - 1
    if not isEven(end - start):
        c = start + int(((end - start) / 2) - 0.5)
        d = c + 1

        if num < array[c]:
            return ['L', d - 1]
        if num > array[d]:
            return ['R', d + 1]
        if num == array[c]:
            return [c]
        if num == array[d]:
            return [d]
    else:
        x = int((start + end) / 2)
        if num == array[x]:
            return [x]
        if num < array[x]:
            return ['L', x - 1]
        if num > array[x]:
            return ['R', x + 1]


start = 0
end = len(a)
r = 0
search = 45
while 1:
    t = check(a, start, end, search)
    x = t[0]
    if x == 'R':
        start = t[1]
        end = len(a)
    elif x == 'L':
        end = t[1]
        start = 0
    else:
        print('Index is :')
        print(t[0])
        r = t[0]
        break
