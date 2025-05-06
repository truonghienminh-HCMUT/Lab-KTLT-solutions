[Tiếng Việt]

Hiện thực hàm void replaceString(string s, string s1, string s2) để in ra chuỗi s sau khi đã thay thế  chuỗi con s1 cuối cùng thành s2 có trong s.

Nếu không tìm thấy chuỗi s1 thì giữ nguyên chuỗi s và in ra.

Gợi ý: Tham khảo hàm string::replace trong thư viện \<string>.




[English]

Implement the function void replaceString(string s, string s1, string s2) to print the string s after replacing the last substring s1 with the s2 contained in s.

If the string s1 is not found, keep the string s and print it.

Hint: Refer to the string::replace function in the \<string> library.

Test:
```cpp
string s = "Truong Dai Hoc Bach Khoa, Sai Gon";
string s1 = "ai";
string s2 = "ong";
replaceString(s, s1, s2);
```
Result:
```
Truong Dai Hoc Bach Khoa, Song Gon
```