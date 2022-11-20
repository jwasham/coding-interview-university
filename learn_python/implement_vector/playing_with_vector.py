from custom_vector import CustomVector

if __name__ == '__main__':
    vector = CustomVector()
    vector.push(1)
    vector.push(2)
    vector.push(2)
    vector.push(2)
    vector.push(3)
    assert vector.capacity() == 16
    assert vector.size() == 5

    vector.remove(2)
    vector.remove(3)
    assert vector.size() == 1

    vector.clear()
    vector.push(1)
    vector.push(2)
    vector.push(3)
    vector.push(4)
    vector.push(5)
    assert vector.capacity() == 16
    assert vector.size() == 5

    vector.delete(1)
    assert vector.capacity() == 16
    assert vector.size() == 4
    assert vector.get(1) == 3

    vector2 = CustomVector(2)
    assert vector2.size() == 0
    assert vector2.capacity() == 2
    assert vector2.is_empty() is True

    vector2.push(1)
    assert vector2.size() == 1
    assert vector2.capacity() == 4
    assert vector2.is_empty() is False

    vector2.push(2)
    vector2.push(3)
    assert vector2.size() == 3
    assert vector2.capacity() == 8

    vector2.push(4)
    vector2.push(4)
    vector2.push(4)
    vector2.push(4)
    assert vector2.size() == 7
    assert vector2.capacity() == 16
    assert vector2.get(0) == 1
    value = vector2.pop()
    assert vector2.size() == 6
    assert vector2.capacity() == 16
    assert value == 4

    assert vector2.find(2) == 1
    assert vector2.find(20) == -1

    vector3 = CustomVector(3)
    assert vector3.size() == 0
    assert vector3.capacity() == 3
    vector3.push(1)
    vector3.push(2)
    assert vector3.capacity() == 6
    assert vector3.size() == 2
    vector3.insert(1, 3)
    assert vector3.size() == 3

    vector4 = CustomVector(1)
    vector4.prepend(1)
    assert vector4.size() == 1
    assert vector4.capacity() == 4

