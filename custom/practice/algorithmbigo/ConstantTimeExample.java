package algorithmbigo;

/*
* 1. O(1) - Độ phức tạp Hằng số (Constant Time)
O(1) có nghĩa là thời gian thực thi không thay đổi, bất kể kích thước đầu vào.
* */
public class ConstantTimeExample {
    public static int getFirstElement(int[] arr) {
        // Kiểm tra mảng rỗng để tránh lỗi
        if (arr.length == 0) {
            return -1; // Hoặc ném ngoại lệ
        }
        return arr[0]; // Truy cập trực tiếp phần tử đầu tiên
    }

    public static void main(String[] args) {
        int[] smallArray = {10, 20, 30};
        int[] largeArray = new int[1000000]; // Mảng rất lớn

        System.out.println("Phần tử đầu tiên của mảng nhỏ: " + getFirstElement(smallArray));
        System.out.println("Phần tử đầu tiên của mảng lớn: " + getFirstElement(largeArray));
    }
}

/*
* Trong ví dụ trên, hàm getFirstElement luôn thực hiện một số bước cố định: kiểm tra độ dài mảng và truy cập phần tử tại chỉ mục 0.
*  Số lượng phần tử trong mảng (dù là 3 hay 1 triệu) không ảnh hưởng đến số bước này. Do đó, độ phức tạp của nó là O(1).
* */