import ctypes

"""
ctypes is a foreign function library for Python. It provides C compatible data types, and allows calling functions in DLLs or shared libraries. It can be used to wrap these libraries in pure Python.
"""
class DynamucArray(object):
        def __init__(self):
                self.n = 0 #default count
                self.capacity = 1 #default capacity
                self.A = self.make_array(self.capacity)

        def __len__(self):
                return self.n #return number of elements

        def __getitem__(self,k):
                if k>=0 & k <self.n:
                        return self.A[k]
                else:
                        retun IndexError("Index out of bounds")

        def append(self, element):
                if self.n == self.capacity:
                        self._resize(2 * self.capacity) #we pass double as it is a good idea

                self.A[self.n] = element
                self.n = self.n + 1 # because of this, we can check if n == capacity, if elements were 0, and capacity was 1 , it will update n to 1, this will triggr overflow and do e

        def _resize(self, new_capacity): #_private
                B = self.make_array(new_capacity) #simply create a new array from ctypes.py_object
                for k in range(self.n): #copy the things from old to new arrays
                        B[k] = self.A[k]
                self.A  = B #simply give the new array to the old one
                self.capacity = new_capacity #updat ethe new capacity which is 2 times the larger

        def make_array(self, new_capacity):
                return (new_capacity * ctypes.py_object)()  #

arr = DynamicArray()

arr.append(2)
print(len(arr))
arr[0]
arr[1]
arr.append(33)
s
