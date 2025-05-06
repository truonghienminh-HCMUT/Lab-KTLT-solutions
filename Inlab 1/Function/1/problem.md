[Tiếng Việt]

Một chuỗi được gọi là palindrome nếu chuỗi đó giống với chuỗi được đảo ngược từ chính nó. Ví dụ: “eye”, “noon”, “abcba”...

Hãy viết hàm kiểm tra xem một chuỗi có là palindrome hay không?

Đầu vào:

- const char* str: chuỗi cần kiểm tra palindrome. str chỉ bao gồm chữ cái thường
Đầu ra:
    
+    bool: true nếu chuỗi str là palindrome, ngược lại false


[English]

A string is a palindrome if it reads the same forward and backward. For example: "eye", "noon", "abcba", ...

Write a function to check if a given string is a palindrome

Input: 

- const char* str: chuỗi cần kiểm tra palindrome. str chỉ bao gồm chữ cái thường
Output:

- bool: true nếu chuỗi str là palindrome, ngược lại false

Test:
```cpp
const char* str = "abba";
cout << isPalindrome(str);
```
Result:
```
1
```

Test:
```cpp
const char* str = "axz";
cout << isPalindrome(str);
```
Result:
```
0
```