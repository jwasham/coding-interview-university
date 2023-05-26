// See https://aka.ms/new-console-template for more information

// array.Push(2);
// array.Push(3);
// array.Insert(3, 99);
public class CustomIntArray
{
    int[] _array;

    public CustomIntArray(int size)
    {
        _array = new int[size];
    }

    public int[] GetValue() { return _array; }

    public int[] GenerateRandomArray(int size)
    {
        // Generate random array
        for (int i = 0; i < size; i++)
        {
            var rd = new Random();
            _array[i] = rd.Next(1, 100);
        }

        return _array;
    }

    // Number of items
    public int Size()
    {
        int count = 0;
        for (int i = 0; i < _array.Length; i++)
        {
            if (_array[i] != 0) count++;
        }

        return count;
    }

    // Number of items it can hold
    public int Capacity()
    {
        return _array.Length;
    }

    // Array with no element
    public bool IsEmpty()
    {
        var res = Size() == 0;
        return res;
    }

    public int At(int index)
    {
        return _array[index];
    }

    // Add an item to the end of array
    public int Push(int item)
    {
        if (Size() < Capacity())
        {
            _array[Size()] = item;

            return item;
        }

        var currentArr = _array;
        _array = new int[_array.Length + 1];

        CopyTo(currentArr, _array);

        _array[^1] = item;
        return item;
    }

    public int Insert(int index, int item)
    {
        try
        {
            if (index == _array.Length - 1)
            {
                Push(item);
                return item;
            }

            var currentArr = _array;
            _array = new int[_array.Length + 1];
            CopyTo(currentArr, _array, 0, index - 1);
            _array[index] = item;
            CopyTo(currentArr, _array, index, currentArr.Length, 1);

            return item;
        }
        catch (System.Exception)
        {
            return -1; // error, can not insert
        }
    }

    // remove last element
    public int Pop()
    {
        var item = At(_array.Length - 1);
        Rezie(_array.Length - 1);
        return item;
    }

    public void Delete(int index)
    {
        for (int i = index; i < Size() - 1; i++)
        {
            _array[i] = _array[i + 1];
        }
    }

    private static void CopyTo(int[] source, int[] target)
    {
        // Copy current array to new one
        CopyTo(source, target, 0, source.Length - 1);
    }

    private static void CopyTo(int[] source, int[] target, int fromIndex, int toIndex, int gap = 0)
    {
        for (int i = fromIndex; i <= toIndex; i++)
        {
            target[i + gap] = source[i];
        }
    }

    public void Rezie(int newSize)
    {
        var currentArr = _array;
        _array = new int[newSize];

        CopyTo(currentArr, _array, 0, newSize - 1);
    }

    public void Print()
    {
        Console.WriteLine(string.Join(", ", _array));
    }
}