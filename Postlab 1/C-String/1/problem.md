Viết hàm void process(const char str[], char outstr[]) chuẩn hóa tên người (tên tiếng Anh). Quy tắc chuẩn hóa như sau:

1. Chữ cái đầu tiên của mỗi từ phải ghi hoa, các chữ cái còn lại ghi thường.

2. Tên người chỉ bao gồm những ký tự trong bảng chữ cái alphabet tiếng Anh.

3. Không có các khoảng trắng thừa. Cụ thể, không có 2 khoảng trắng liền kề nhau và không có khoảng trắng nào ở đầu và cuối chuỗi.

 

- Đầu vào:

Mảng kí tự chứa chuỗi cần chuẩn hóa

- Đầu ra:

Tên người đã được chuẩn hóa được ghi vào chuỗi outstr

- Các thư viện có thể dùng: <iostream>, <cstring>

- Note: Sinh viên không được sử dụng các từ khoá sau trong đoạn code nộp bài, kể cả trong comment: "include", "string"

---------------------------------------

Implement void process(const char str[], char outstr[]) function which standardizes English name. The standardized name has the following features:

1. The first character of each word must be uppercase. The remaining characters of each word must be lowercase.

2. Only contains characters in English alphabet.

3. There are no consecutive space characters and there is no space character at the beginning/end of the name

- Input:

Char array contains string  

- Output:

The standardized name is written to outstr

- Available library: <iostream>, <cstring>

- Note: Your code MUST NOT contain any of the words in the list {"include", "string"} even in the comment

Test:
```cpp
const int MAX_SIZE = 100;
char str[] = "doAn VAN *(()hau @!#$" ;
char outstr[MAX_SIZE];
process(str, outstr);
cout << outstr;
```

Result:
```
Doan Van Hau
```