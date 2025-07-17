package algorithmbigo;

/*
* 2. O(n) - Độ phức tạp Tuyến tính (Linear Time)
O(n) có nghĩa là thời gian thực thi tăng tỷ lệ thuận với kích thước đầu vào n.
* */
public class LinearTimeExample {
    public static int sumArray(int[] arr) {
        int sum = 0;
        // Duyệt qua TẤT CẢ các phần tử trong mảng
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        return sum;
    }

    public static int findElement(int[] arr, int target) {
        // Duyệt qua mảng cho đến khi tìm thấy phần tử hoặc hết mảng
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == target) {
                return i; // Tìm thấy, trả về chỉ mục
            }
        }
        return -1; // Không tìm thấy
    }

    public static void main(String[] args) {
        int[] data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        System.out.println("Tổng các phần tử: " + sumArray(data)); // O(n)

        int[] largeData = new int[100000]; // Mảng 100k phần tử
        // (Giả sử điền dữ liệu vào largeData)
        System.out.println("Tìm 99999 trong mảng lớn: " + findElement(largeData, 99999)); // Worst case O(n)
    }
}