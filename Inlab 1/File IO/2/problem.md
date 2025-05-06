Viết hàm void process(string fileName) đọc một file đuôi txt, dòng đầu gồm 2 số N và M cách nhau bởi 1 khoảng trắng.

N dòng theo sau, mỗi dòng gồm M số thực cách nhau bởi 1 khoảng trắng.

Trả về giá trị lớn nhất của mỗi dòng và giá trị lớn nhất trong tất cả các số.
Các thư viện đã được include: iostream, fstream, string.

Đầu vào:
Biến "fileName" là tên file chứa dữ liệu đầu vào.

Đầu ra:

Giá trị lớn nhất của mỗi dòng và giá trị lớn nhất của tất cả các số, cách nhau bởi ký tự khoảng trắng.



Write a function void process(string fileName) that reads a txt file, the first line consists of 2 numbers N and M separated by a space.

N lines follow, each containing M real numbers separated by 1 space.

Print the maximum value of each line and the maximum value of all numbers.

Included libraries: iostream, fstream, string.

Input:

The variable "fileName" is the name of the file containing the input data.
Output:
The maximum value of each line and the maximum value of all numbers, separated by a space character.

Test 1:
Input:
```
3 4
1 2 3 4
4.3 41.2 -4.576 0
-3 -2 -4 -1
```
Result:
```
4 41.2 -1 41.2
```