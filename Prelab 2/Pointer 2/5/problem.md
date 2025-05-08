Mô tả tiếng Việt:
Cho một mảng động hai chiều matrix có kích thước r x c. Hiện thực hàm void insertRow(int**& matrix, int r, int c, int* rowArr, int row) tiến hành chèn mảng rowArr (có kích thước c) vào hàng thứ row của mảng matrix.
Đầu vào: Mảng 2 chiều matrix có kích thước r x c, hàng cần chèn rowArr và vị trí chèn row.

Đầu ra: Mảng 2 chiều matrix sau khi được chèn.

English version:

Given a dynamic two-dimensional array of size r x c. Implement the function void insertRow(int**& matrix, int r, int c, int* rowArr, int row) that can insert the rowArr array (with the size c) into the row position, row, of the matrix.

Input: The two-dimensional matrix of size r x c, the insert row rowArr and the insert position row.

Output: The two-dimensional matrix after insert.

Test 1:

Input:
```
2 3
1 2 3
4 5 6
2
7 8 9
```

Result:
```
1 2 3
4 5 6
7 8 9
```