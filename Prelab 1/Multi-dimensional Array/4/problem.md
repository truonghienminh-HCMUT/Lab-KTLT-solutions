Mô tả tiếng Việt:

Cho mảng 2 chiều chứa các số nguyên, kích thước M x N.

Hiện thực hàm:

```cpp
int diagonalDiff(int arr[][1000], int row, int col, int x, int y);
```

Trong đó; `arr`, `row` và `col` lần lượt là mảng 2 chiều, số hàng, số cột của mảng; x và y biểu thị ô có số hàng là x và số cột là y trong mảng đã cho (`0≤x<row` và `0≤y<col`). Tổng của một đường chéo là tổng tất cả các phần tử nằm trên đường chéo đó. Tìm giá trị tuyệt đối của hiệu giữa hai đường chéo đi qua ô có số hàng x và số cột y.

Ghi chú: (Các) thư viện `iostream`, `vector` và `string` đã được khai báo, và namespace `std` đã được sử dụng.

English version:

Given a two-dimensional array whose each element is an integer, its size is M x N.

Implement the following function:

```cpp
int diagonalDiff(int arr[][1000], int row, int col, int x, int y);
```
Where `arr`, `row` and `col` are the given two-dimensional array, its number of rows and its number of columns. ; x and y represent the cell whose index of the row is x and index of the column is y (`0≤x<row` và `0≤y<col`). The sum of a diagonal is the sum of all elements on it. Find the absolute value of the difference between the sums of two diagonals containing the cell which is represented by x and y of the given array.

Note: Libraries `iostream`, `vector`, and `string` have been imported, and namespace `std` has been used.

Test:
```cpp
int arr[][1000] = {{55,85,47,58},{31,4,60,67},{94,69,71,73},{51,62,64,90}};
cout << diagonalDiff(arr,4,4,1,2);
```
Result:
```
20
```

Test:
```cpp
int arr[][1000] = {{88,72,65,37},{82,84,34,12},{74,46,88,44}};
cout << diagonalDiff(arr,3,4,1,0);
```
Result:
```
20
```