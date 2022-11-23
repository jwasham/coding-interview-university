from custom_errors.list_is_empty_error import ListIsEmptyError
from models.linked_list_node import ListNode


class LinkedList:
    def __init__(self):
        self.__head: ListNode = None
        self.__size = 0

    def with_head(self, head: ListNode):
        self.__head = head
        self.__size = 1
        return self

    def size(self):
        "returns number of data elements in list"
        return self.__size

    def is_empty(self):
        "bool returns true if empty"
        return self.size() == 0

    def push_front(self, data):
        "adds an item to the front of the list"
        if self.__head is None:
            node = ListNode(data)
            self.__head = node
        else:
            first_node = self.__head
            node = ListNode(data)
            node.set_next(first_node)
            self.__head = node
        self.__size += 1

    def pop_front(self):
        "removes front item and returns its value"
        if self.size() == 0:
            raise ListIsEmptyError()
        if self.size() == 1:
            data = self.__head.get_value()
            self.__head = None
            self.__size = 0
            return data

        data = self.__head.get_value()
        self.__head = self.__head.get_next()
        self.__size -= 1
        return data

    def push_back(self, value):
        "adds an item at the end"
        if self.size() == 0:
            self.push_front(value)
        elif self.size() == 1:
            self.__head.set_next(ListNode(value))
            self.__size += 1
        else:
            last_node = self.__head
            while last_node.get_next() is not None:
                last_node = last_node.get_next()
            last_node.set_next(ListNode(value))
            self.__size += 1

    def pop_back(self):
        if self.size() == 0:
            raise ListIsEmptyError()
        if self.size() == 1:
            value = self.__head.get_value()
            self.__head.set_next(None)
            return value

        prelast_node = self.__head
        while prelast_node.get_next().get_next() is not None:
            prelast_node = prelast_node.get_next()

        value = prelast_node.get_next().get_value()
        prelast_node.set_next(None)
        return value

    def value_at(self, index):
        if index > self.size() or index < 0:
            raise IndexError(index)

        if index == 0:
            return self.__head.get_value()
        else:
            node = self.__head
            while index != 0:
                node = node.get_next()
                index-=1
            return node.get_value()

