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

    def test_should_reverse_list(self):
        linked_list = LinkedList()
        linked_list.push_front(1)
        linked_list.push_front(2)
        linked_list.push_front(3)

        linked_list.reverse()

        value = linked_list.pop_front()
        self.assertEqual(value, 1)

        value = linked_list.pop_front()
        self.assertEqual(value, 2)

        value = linked_list.pop_front()
        self.assertEqual(value, 3)

    def test_should_get_back_item(self):
        linked_list = LinkedList()
        linked_list.push_front(1)
        linked_list.push_front(2)
        linked_list.push_front(3)
        value = linked_list.back()
        self.assertEqual(value, 1)

    def test_insert(self):
        linked_list = LinkedList()
        linked_list.insert(0, 1)
        linked_list.insert(1, 2)
        linked_list.insert(1, 5)
        output = "1 5 2"
        printed = linked_list.print()
        self.assertEqual(output, printed)

    def test_remove_at(self):
        linked_list = LinkedList()
        linked_list.push_back(0)
        linked_list.push_back(1)
        linked_list.push_back(2)
        linked_list.push_back(3)

        linked_list.remove_at(2)
        output = "0 1 3"
        printed = linked_list.print()
        self.assertEqual(output, printed)

    def test_remove_value(self):
        linked_list = LinkedList()
        linked_list.push_back(0)
        linked_list.push_back(1)
        linked_list.push_back(2)
        linked_list.push_back(10)
        linked_list.push_back(3)

        linked_list.remove_value(10)
        output = "0 1 2 3"
        printed = linked_list.print()
        self.assertEqual(output, printed)


if __name__ == '__main__':
    unittest.main()
