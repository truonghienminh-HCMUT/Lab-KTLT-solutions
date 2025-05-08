Hiện thực hàm sau:

void swap(int *ptr1, int *ptr2);

Thực hiện hoán đổi giá trị tại vị trí của 2 con trỏ trỏ tới.

Trong đó:
- ptr1, ptr2 lần lượt là là các con trỏ trỏ tới vị trí cần hoàn đổi.
------------------------------------------------------------
Implement the following function:

void swap(int *ptr1, int *ptr2);

Swap the value at the position that 2 pointers point to.

Where:
- ptr1, ptr2 respectively are pointers to swapping positions.

Test:
```cpp
int a = 5;
int b = 6;
swap(&a, &b);
cout << a << ' ' << b;
```

Result:
```
6 5
```