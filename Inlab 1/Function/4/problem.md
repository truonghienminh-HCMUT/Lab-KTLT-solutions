[Tiếng Việt]

Viết hàm kiểm tra các phần tử trong mảng có duy nhất hay không

Đầu vào:

- int* arr: mảng số tự nhiên
- int n: số lượng phần tử trong mảng
Đầu ra:

- bool: trả về true nếu các phần tử trong mảng là duy nhất, ngược lại trả về false
Chú ý: arr[i] nằm trong khoảng từ [0, 1000]



[English]

Write a function that determines if the elements in the given array is unique

Input:

- int* arr: array of integer
- int n: the size of the array
Output:

- bool: return true if the elements in arr is unique, otherwise return false
Note: arr[i] is in the range of [0, 1000]

Test 1:
```cpp
int n;
cin >> n;
int* arr = new int[n];
for(int i = 0; i < n; i++) {
    cin >> arr[i];
}
cout << checkElementsUniqueness(arr, n);
delete[] arr;
```

Input:
```
5
2 5 13 5 2
```

Result:
```
0
```

Test 2:
```cpp
int n;
cin >> n;
int* arr = new int[n];
for(int i = 0; i < n; i++) {
    cin >> arr[i];
}
cout << checkElementsUniqueness(arr, n);
delete[] arr;
```

Input:
```
3
17 10 25
```

Result:
```
1
```