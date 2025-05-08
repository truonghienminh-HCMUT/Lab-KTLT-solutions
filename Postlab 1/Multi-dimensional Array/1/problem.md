Mô tả tiếng Việt:

Cho mảng 2 chiều chứa các số nguyên, kích thước M x N.

Hiện thực hàm:
```cpp
int specialCells(int arr[][1000], int row, int col);
```
Trong đó; `arr`, `row` và `col` lần lượt là mảng 2 chiều, số hàng và số cột của mảng. Một ô trong mảng được gọi là HN3 nếu tổng tất cả các phần tử trong hàng chứa ô đó và tổng tất cả các phần tử trong cột chứa ô đó đều là số nguyên tố. Tìm số ô HN3 trong mảng.

Ghi chú: (Các) thư viện `iostream`, `vector` và `string` đã được khai báo, và namespace std đã được sử dụng.

English version:

Given a two-dimensional array whose each element is integer, its size is M x N.

Implement the following function:
```cpp
int specialCells(int arr[][1000], int row, int col);
```
Where `arr`, `row` and `col` are the given two-dimensional array, its number of rows and its number of columns. A cell is called as HN3 if the sum of all elements of the row containing it and the sum of all elements of the column containing it are prime numbers. Find the number of HN3 cells of the given array.

Note: Libraries `iostream`, `vector`, and `string` have been imported, and namespace std has been used.

Test:
```cpp
int arr[][1000] = {{37,53,74},{12,37,60},{98,13,15}};
cout << specialCells(arr,3,3);
```

Result:
```
2
```

Test:
```cpp
int arr[][1000] = {{1,87,26},{97,95,88},{57,60,46}};;
cout << specialCells(arr,3,3);
```

Result:
```
0
```