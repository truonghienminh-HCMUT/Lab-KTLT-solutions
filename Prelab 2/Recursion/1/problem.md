[Tiếng Việt]

 

Cho số nguyên n và số nguyên dương e, trong đó n là số cần tính lũy thừa và e là số mũ. Hãy viết một hàm đệ quy 

 

`int calculate_power(int n, int e){} `
 

để tính giá trị của n^e.

Lưu ý không được sử dụng các từ khóa như for, while, goto (thậm chí là tên biến, comment).

Trong bài tập này đã khai báo #include \<iostream> và  using namespace std;

[English]

 

 

Given integer n and positive integer e, where n is the base and e is the exponent. Write a recursive function

 

`int calculate_power(int n, int e){} `
 

to calculate the value of n^e.

Please note that you can't using key work for, while, goto (even in variable names, comment).

For this exercise, we have #include \<iostream> and using namespace std;

Test:
```cpp
int n = 2;
int e = 3;
cout << calculate_power(n ,e);
```

Result:
```
8
```