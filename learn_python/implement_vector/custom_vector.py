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
        self.__process_item_added()

    def insert(self, index, item):
        if index >= self.__capacity:
            raise IndexError(f'Index is bigger than capacity: {self.__capacity}')

        before_index, after_index = self.__split_items_by_index(index)
        before_index.append(item)
        new_items = before_index + after_index

        self.__update_capacity(self.capacity() + 1)
        self.__set_items(new_items.copy(), 1)

    def prepend(self, item):
        self.insert(0, item)

    def pop(self) -> int:
        if self.size() > 0:
            value = self.get(self.__last_free_index - 1)
            new_items = self.__items[:self.__last_free_index - 1]
            new_items.append(None)
            self.__set_items(new_items, -1)
            return value
        raise IndexError('vector is empty')

    def delete(self, index):
        if index > self.capacity():
            raise IndexError
        before_index, after_index = self.__split_items_by_index(index)
        new_items = before_index + after_index[1:]
        self.__set_items(new_items.copy(), -1)

    def remove(self, value):
        for (index, item) in enumerate(self.__items):
            if item == value:
                self.delete(index)

    def find(self, value):
        for (index, item) in enumerate(self.__items):
            if item == value:
                return index
        return -1

    def clear(self):
        items = [None] * self.capacity()
        self.__set_items(items)
        self.__last_free_index = 0

    def __resize_if_need(self):
        if self.capacity() - self.size() <= 1:
            self.__resize()

    def __resize(self):
        new_items = self.__items + [None] * self.__capacity
        self.__update_capacity(self.capacity() * 2)
        self.__set_items(new_items.copy())

    def __split_items_by_index(self, index):
        return self.__items[:index], self.__items[index:]

    def __process_item_added(self):
        self.__last_free_index += 1
        self.__resize_if_need()

    def __set_items(self, items, last_free_index_dif=0):
        self.__items = items
        self.__last_free_index += last_free_index_dif
        self.__resize_if_need()

    def __update_capacity(self, capacity):
        self.__capacity = capacity
