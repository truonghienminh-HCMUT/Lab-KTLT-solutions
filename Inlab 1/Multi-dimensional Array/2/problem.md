Mô tả tiếng Việt:

Cho mảng 2 chiều chứa các số nguyên, kích thước M x N.

Hiện thực hàm:

```cpp
int primeColumns(int arr[][1000], int row, int col);
```
Trong đó; `arr`, `row` và `col` lần lượt là mảng 2 chiều, số hàng và số cột của mảng. Một cột của mảng được gọi là HN2 nếu tổng tất cả các phần tử trong cột đó là số nguyên tố. Tìm số cột HN2 có trong mảng.

Ghi chú: (Các) thư viện `iostream`, `vector` và `string` đã được khai báo, và namespace std đã được sử dụng.

English version:

Given a two-dimensional array whose each element is integer, its size is M x N.

Implement the following function:
```cpp
int primeColumns(int arr[][1000], int row, int col);
```
Where `arr`, `row` and `col` are the given two-dimensional array, its number of rows and its number of columns. A column of the given array is called as HN2 if the sum of all elements on it is a prime number. Find the number of HN2 columns in the given array.

Note: Libraries `iostream`, `vector`, and `string` have been imported, and namespace std has been used.

Test:
```cpp
int arr[][1000] = {{-64,-28,-3,64},{-56,90,57,-31}};
cout << primeColumns(arr,2,4);
```
Result:
```
0 
```

Test:
```cpp
int arr[][1000] = {{34,-15,11,-70,-23,24},{-39,-90,63,-45,-52,48},{-42,92,55,92,82,81}};
cout << primeColumns(arr,3,6);
```
Result:
```
1
```
