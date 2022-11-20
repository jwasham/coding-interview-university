class CustomVector:

    def __init__(self, capacity=None) -> None:
        self.__capacity = capacity if capacity is not None else 16
        self.__items: [] = [None] * self.__capacity
        self.__last_free_index = 0

    def size(self) -> int:
        return self.__last_free_index

    def is_empty(self) -> bool:
        return self.size() == 0

    def capacity(self):
        return self.__capacity

    def get(self, index):
        if index > self.size() - 1:
            raise IndexError
        return self.__items[index]

    def push(self, item):
        self.__items[self.__last_free_index] = item
        self.__last_free_index += 1
        self.__resize_if_need()

    def insert(self, index, item):
        if index >= self.__capacity:
            raise IndexError(f'Index is bigger than capacity: {self.__capacity}')

        before_index, after_index = self.__split_array_by_index(index)
        before_index.append(item)
        new_items = before_index + after_index
        self.__capacity += 1
        self.__items = new_items.copy()
        self.__last_free_index += 1
        self.__resize_if_need()

    def prepend(self, item):
        self.insert(0, item)

    def pop(self) -> int:
        if self.size() > 0:
            value = self.get(self.__last_free_index - 1)
            self.__items[self.__last_free_index] = None
            self.__last_free_index -= 1
            return value
        raise IndexError('vector is empty')

    def delete(self, index):
        if index > self.capacity():
            raise IndexError
        before_index, after_index = self.__split_array_by_index(index)
        new_items = before_index + after_index[1:]
        self.__items = new_items.copy()
        self.__last_free_index -= 1

    def remove(self, value):
        for (index, item) in enumerate(self.__items):
            if item == value:
                self.delete(index)

    def find(self, value):
        for (index, item) in enumerate(self.__items):
            if item == value:
                return index
        return -1

    def __resize_if_need(self):
        if self.capacity() - self.size() <= 1:
            self.__resize()

    def __resize(self):
        new_array = self.__items + [None] * self.__capacity
        self.__capacity = self.__capacity * 2
        self.__items = new_array.copy()

    def __split_array_by_index(self, index):
        return self.__items[:index], self.__items[index:]
