Mô tả tiếng Việt:

Cho mảng 2 chiều chứa các số nguyên, kích thước M x N.

Hiện thực hàm:

```cpp
int ascendingRows(int arr[][1000], int row, int col);
```
Trong đó; `arr`, `row` và `col` lần lượt là mảng 2 chiều, số hàng và số cột của mảng. Một hàng trong mảng được gọi là HN1 nếu trong hàng đó, mỗi phần tử đều có giá trị không lớn hơn các phần tử đứng sau nó. Tìm số hàng HN1 có trong mảng.

Ghi chú: (Các) thư viện `iostream`, và `string` đã được khai báo, và namespace std đã được sử dụng.

English version:

Given a two-dimensional array whose each element is integer, its size is M x N.

Implement the following function:
```cpp
int ascendingRows(int arr[][1000], int row, int col);
```
Where `arr`, `row` and `col` are the given two-dimensional array, its number of rows and its number of columns. A row of the given array is called as HN1 if on this row, each element's value is not higher than all elements after it. Find the number of HN1 rows of the given array.

Note: Libraries `iostream`, and `string` have been imported, and namespace std has been used.

Test:
```cpp
int arr[][1000] = {{32,4,9},{-80,37,71},{-91,-79,-55}};
cout << ascendingRows(arr,3, 3);
```
Result:
```
2
```

Test:
```cpp
int arr[][1000] = {{-28,-8,-60,18},{-100,44,-1,24},{-94,92,-70,75}};
cout << ascendingRows(arr,3,4);
```
Result:
```
0
```