Viết hàm void void reverse(char str[]) đảo ngược các ký tự trong chuỗi. 
- Mô tả hàm: Hàm này thực hiện việc đảo ngược chuỗi ký tự truyền vào ngay tại chỗ (in-place). Hàm không trả về giá trị và thay đổi chuỗi đầu vào để chuỗi sau khi đảo ngược thay thế chuỗi ban đầu.

\- Đầu vào: char str[]

Mảng kí tự chứa chuỗi cần đảo ngược

\- Đầu ra:

Chuỗi đầu vào được đảo ngược ngay tại chỗ, không cần chuỗi đầu ra outstr.

\- Các thư viện có thể dùng: <iostream>, <cstring>

\- Note: Sinh viên không được sử dụng các từ khoá sau trong đoạn code nộp bài, kể cả trong comment: "include", "string"
Tham số truyền vào: 

---------------------------------------

Implement void reverse(char str[]) function which reverses the string.
- Function Description: This function reverses the input character string in-place. It does not return a value and modifies the input string so that the reversed string replaces the original string.

- Input: char str[]

Char array contains string

- Output:

The input string is reversed in place, no need for an output string outstr.

- Available library: <iostream>, <cstring>

- Note: Your code MUST NOT contain any of the words in the list {"include", "string"} even in the comment







```cpp
void reverse(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n/2; i++){
        swap(str[i], str[n - i - 1]);
    }
}```