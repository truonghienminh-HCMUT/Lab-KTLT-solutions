[Tiếng Việt]

Viết hàm tìm chữ cái xuất hiện nhiều lần nhất trong một chuỗi và số lần xuất hiện của chữ cái đó. Nếu có nhiều chữ cái thỏa mãn, xác định chữ cái có thứ tự alphabet nhỏ nhất.

Đầu vào:

 

- const char* str: chuỗi ký tự đang xét, chỉ bao gồm chữ cái thường và hoa
 

Đầu ra:

 

- char& res: chữ cái xuất hiện nhiều lần nhất trong chuỗi str
- int& freq: số lần xuất hiện của chữ cái đó
 

Chú ý: tham số res là chữ cái thường. Chữ cái viết hoa strong str cũng được tính là giống chữ cái viết thường (VD "aA" chứa hai ký tự 'a')

 

Lưu ý: Sinh viên chỉ có 5 lần nộp không tính penalty, ở lần nộp thứ 6 trở đi bài làm sẽ được tính là 0 điểm.

 

[English]

Write a function that finds the most frequent character in a given string and how many times that character appears. If there are multiple characters satisfy the condition, find the one with the lowest alphabetical order.

Input:

 

- const char* str: the input string, contains only lowercase and uppercase ASCII letters
Output:

 

 

- char& res: chữ cái xuất hiện nhiều lần nhất trong chuỗi str
- int& freq: số lần xuất hiện của chữ cái đó
 

Note: return res as a lowercase letter. Uppercase letters in str is also counted as lowercase letters (e.g the string "aA" contains two letter 'a')

Test 1:
```cpp
int n;
cin >> n;
char* str = new char[n+1];
for(int i = 0; i < n; i++) cin >> str[i];
str[n] = 0;
char res = 0;
int freq = 0;
mostFrequentCharacter(str, res, freq);
cout << res << ' ' << freq;
delete[] str;
```

Input:
```
7
aCxAboc
```

Result:
```
a 2
```
