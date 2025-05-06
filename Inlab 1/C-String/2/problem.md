Viết hàm void printFirstRepeatedWord(char str[]) in ra từ đầu tiên trong chuỗi bị lặp lại. Từ bị lặp lại trong một chuỗi là từ mà từ vị trí của nó trở về phía trước có xuất hiện một từ giống với nó.
\- Đầu vào:

Mảng kí tự chứa chuỗi

\- Đầu ra:

In ra từ đầu tiên trong chuỗi có lặp lại. Nếu không có từ nào lặp lại thì in ra "No Repetition"

\- Các thư viện có thể dùng: \<iostream>, \<cstring>

\- Note: Sinh viên không được sử dụng các từ khoá sau trong đoạn code nộp bài, kể cả trong comment: "include", "string". Mỗi từ trong chuỗi có không quá 30 ký tự.

 

---------------------------------------

Implement void printFirstRepeatedWord(char str[]) function which print the first word that repeats. In a string, a repeated word is a word that, from its position to the left, has a similar word appearing before it.

\- Input:

Char array contains string

\- Output:

Print the first word that has repetition. If there is no repeated word, print "No Repetition"

\- Available library: \<iostream>, \<cstring>

\- Note: Your code MUST NOT contain any of the words in the list {"include", "string"} even in the comment. Each word in the string has no more than 30 characters.

Test:
```cpp
char str[] = "car taxi bike bike car taxi" ;
printFirstRepeatedWord(str);
```
Result:
```
bike
```

Test:
```cpp
char str[] = "football voleyball badminton football" ;
printFirstRepeatedWord(str);
```
Result:
```
football
```