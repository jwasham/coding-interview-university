class ListIsEmptyError(Exception):
    def __init__(self):
        self.__message = 'List is empty'
        super().__init__(self.__message)
