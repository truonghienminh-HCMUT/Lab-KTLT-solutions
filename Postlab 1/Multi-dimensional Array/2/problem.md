Mô tả tiếng Việt:

Cho mảng 2 chiều chứa các số nguyên, kích thước M x N.

Hiện thực hàm:

```cpp
int subMatrix(int arr[][1000], int row, int col);
```
Trong đó; `arr`, `row` và `col` lần lượt là mảng 2 chiều, số hàng và số cột của mảng. Một mảng con kích thước 2x2 thuộc mảng đã cho được gọi là HN4 nếu tổng tất cả các phần tử trong nó là một số lẻ. Tìm số mảng con HN4 trong mảng đã cho.

Ghi chú: (Các) thư viện `iostream`, `vector` và `string` đã được khai báo, và namespace std đã được sử dụng.

English version:

Given a two-dimensional array whose each element is integer, its size is M x N.

Implement the following function:
```cpp
int subMatrix(int arr[][1000], int row, int col);
```
Where `arr`, `row` and `col` are the given two-dimensional array, its number of rows and its number of columns. A sub-array whose size is 2x2 is called as HN4 if the sum of all elements of it is an odd number. Find the number of sub-array of the given array.

Note: Libraries `iostream`, `vector`, and `string` have been imported, and namespace std has been used.

Test:
```cpp
int arr[][1000] = {{66,16,71},{25,81,61},{2,10,34}};
cout << subMatrix(arr,3, 3);
```

Result:
```
1
```

Test:
```cpp
int arr[][1000] ={{44,45,89},{82,91,34},{83,87,33},{65,51,66}};
cout << subMatrix(arr,4, 3);
```

Result:
```
4
```