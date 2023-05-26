// See https://aka.ms/new-console-template for more information
Console.WriteLine("Hello, World!");

var array = new CustomIntArray(5);
Console.WriteLine("Init new array...");
Console.WriteLine("Is array empty: " + array.IsEmpty());
array.GenerateRandomArray(5);
array.Print();

Console.WriteLine("Array size: " + array.Size());
Console.WriteLine("Array capacity: " + array.Capacity());

Console.WriteLine("--Push a new item to array--");
array.Push(1);
array.Push(2);
array.Push(3);
array.Print();
Console.WriteLine("Array size: " + array.Size());
Console.WriteLine("Array capacity: " + array.Capacity());

Console.WriteLine("--Insert a new item to array--");
array.Insert(3, 99);
array.Print();

Console.WriteLine("--Pop--");
Console.WriteLine("Pop element: " + array.Pop());
array.Print();

Console.WriteLine("--Delete--"+ "Delete item at index 3: ");
Console.WriteLine("Deleted item: " + array.GetValue()[3]);

array.Delete(3);
array.Print();
Console.WriteLine("Array size: " + array.Size());
Console.WriteLine("Array capacity: " + array.Capacity());