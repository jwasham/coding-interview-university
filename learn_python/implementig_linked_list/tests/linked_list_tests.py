import unittest

from models.linked_list import LinkedList, ListIsEmptyError
from models.linked_list_node import ListNode


class LinkedListTestCase(unittest.TestCase):
    def test_should_create_empty_list(self):
        linked_list = LinkedList()
        self.assertEqual(linked_list.size(), 0)
        self.assertEqual(linked_list.is_empty(), True)

    def test_should_add_element_to_list(self):
        linked_list = LinkedList()
        linked_list.push_front(1)
        self.assertEqual(linked_list.size(), 1)
        self.assertEqual(linked_list.is_empty(), False)

    def test_should_add_several_elements_to_list(self):
        linked_list = LinkedList()
        linked_list.push_front(1)
        linked_list.push_front(2)
        linked_list.push_front(3)
        self.assertEqual(linked_list.size(), 3)
        self.assertEqual(linked_list.is_empty(), False)

    def test_should_pop_front_element(self):
        head = ListNode(1)
        linked_list = LinkedList().with_head(head)
        front_element = linked_list.pop_front()
        self.assertEqual(front_element, 1)
        self.assertEqual(linked_list.size(), 0)
        self.assertEqual(linked_list.is_empty(), True)

    def test_should_raise_error_on_pop_front_from_empty_list(self):
        linked_list = LinkedList()
        self.assertRaises(ListIsEmptyError, linked_list.pop_front)

    def test_should_push_back(self):
        linked_list = LinkedList()
        linked_list.push_front(1)
        linked_list.push_front(2)
        linked_list.push_front(3)
        linked_list.push_back(0)
        value = linked_list.pop_back()
        self.assertEqual(value, 0)

    def test_should_correctly_receive_value_by_index(self):
        linked_list = LinkedList()
        linked_list.push_front(1)
        linked_list.push_front(2)
        linked_list.push_front(3)
        linked_list.push_back(0)
        value = linked_list.value_at(2)
        self.assertEqual(value, 1)


if __name__ == '__main__':
    unittest.main()
