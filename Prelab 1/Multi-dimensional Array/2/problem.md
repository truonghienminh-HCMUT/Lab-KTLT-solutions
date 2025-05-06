Mô tả tiếng Việt:

Cho mảng 2 chiều chứa các số nguyên, kích thước N x N.

Hiện thực hàm:

```cpp
int diagonalProduct(int arr[][1000], int row, int col);
```
Trong đó; `arr`, `row` và `col` lần lượt là mảng 2 chiều, số hàng và số cột của mảng. Tìm tích của tất cả các phần tử trong đường chéo chính của mảng.

Ghi chú: (Các) thư viện `iostream`, và `string` đã được khai báo, và namespace std đã được sử dụng.

English version:

Given a two-dimensional array whose each element is integer, its size is N x N.

Implement the following function:

```cpp
int diagonalProduct(int arr[][1000], int row, int col);
```
Where `arr`, `row` and `col` are the given two-dimensional array, its number of rows and its number of columns. Find the product of all elements on the main diagonal of this array.

Note: Libraries `iostream` and `string` have been imported, and namespace std has been used.

Test:
```cpp
int arr[][1000] = {{-45,18,-37},{-2,-31,24},{-48,-33,-48}};
cout << diagonalProduct(arr,3,3);
```
Result:
```
-66960
```

Test:
```cpp
int arr[][1000] = {{-11,44,18,33},{-34,-9,-42,-42},{47,-26,4,-8},{-35,11,-34,-19}};
cout << diagonalProduct(arr,4,4);
```
Result:
```
-7524
```