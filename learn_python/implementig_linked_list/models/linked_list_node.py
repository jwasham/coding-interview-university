class ListNode:
    def __init__(self, value):
        self.__value = value
        self.__next = None

    def set_next(self, node):
        self.__next = node

    def get_value(self):
        return self.__value

    def get_next(self):
        return self.__next

