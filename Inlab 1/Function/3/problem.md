[Tiếng Việt]

Viết một hàm mã hóa và một hàm giải mã một đoạn text theo phương pháp Caesar Cipher. Để mã hoá và giải mã một chuỗi ký tự text, ta cần một tham số có giá trị nguyên là shift.

Hàm mã hóa (tên encrypt) sẽ thay đổi từng chữ cái trong text bằng cách dịch chuyển chữ cái đó sang phải shift lần trong bảng chữ cái. Ví dụ với shift = 3. Khi đó 'a' được mã hoá thành 'd', 'b' được mã hoá thành 'e',... 'z' được mã hoá thành 'c'.

Hàm giải mã (tên decrypt) sẽ nhận một chuỗi ký tự text và giá trị nguyên shift và giải mã chuỗi ký tự này thành chuỗi ban đầu (tức dịch chuyển từng chữ cái sang trái shift lần trong bảng chữ cái)

Đầu vào:

- char* text: chuỗi ký tự cần được mã hoá hoặc giải mã, chỉ bao gồm chữ cái thường và hoa
- int shift: giá trị dịch chuyển trong Caesar Cipher
Đầu ra:

- Hàm không trả về.
- Chuỗi ký tự truyền vào text sẽ thay đổi trực tiếp trong hàm. 
[English]

Write a function to encrypt and a function to decrypt a text string using Caesar Cipher technique.

In this technique, to encrypt a string we need a parameter of type integer called 'shift'.

The encrypt method will shift each letter by some fixed number of position (determined by the parameter 'shift') to the right in the alphabet. For example, when 'shift' is 3, 'a' will be replaced by 'd', 'b' will become 'e', ... , 'z' will become 'c'.

The decrypt method will receive an encoded string and a shift value and it will decode this string to get the original string, which means shifting each character to the left in the alphabet.

Input:

- char* text: the text string that needs to be encrypted or decrypted. text only contains lowercase and uppercase ASCII letters
- int shift: the shift value in Caesar Cipher technique
Output:

- The function returns nothing.
- The input parameter text will be updated in-place.

Test 1:
```cpp
int n, shift; 
cin >> n >> shift;
char* text = new char[n+1];
for(int i = 0; i < n; i++) cin >> text[i];
text[n] = 0;

encrypt(text, shift);
cout << text << '\n';
decrypt(text, shift);
cout << text;

delete[] text;
```

Input:
```
6 3
aczDYZ
```

Result:
```
dfcGBC
aczDYZ
```

Test 2:
```cpp
int n, shift; 
cin >> n >> shift;
char* text = new char[n+1];
for(int i = 0; i < n; i++) cin >> text[i];
text[n] = 0;

encrypt(text, shift);
cout << text << '\n';
decrypt(text, shift);
cout << text;

delete[] text;
```

Input:
```
16 25
programmingisfun
```

Result:
```
oqnfqzllhmfhretm
programmingisfun
```