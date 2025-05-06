Một đường truyền thông tin gồm các kí tự bị hacker tấn công. Cuộc tấn công chỉ làm ảnh hưởng đến các tín hiệu có giá trị là kí tự trong bảng chữ cái làm cho các chữ thường thành chữ in hoa và ngược lại các chữ in hoa thành chữ thường. Sinh viên được chủ đường truyền nhờ để khôi phục dữ liệu lại về như ban đầu.

Sinh viên viết hàm xử lý `void recover(char signal[])` để biến đổi tất cả chữ cái in hoa thành chữ viết thường và chữ cái thường thành chữ in hoa có trong chuỗi `signal` (lưu ý biến đổi trực tiếp trên `signal`).

**Đầu vào (Input):**
* Chuỗi kí tự cần biến đổi chữ hoa thành chữ thường và chữ thường thành chữ hoa

**Đầu ra (Output):**
* Kết quả biến đổi trực tiếp trên `signal` (lưu ý các kí tự không phải kí tự trong bảng chữ cái thì giữ nguyên)

---

The information transmission line is attacked by hackers. The attack only affects the signals with characters that have a value in the alphabet, converting lowercase letters to uppercase and vice versa. The student is asked by the transmission owner to restore the data to its original state.

The student writes a processing function `void recover(char signal[])` to transform all uppercase letters into lowercase letters and lowercase letters into uppercase letters in the string `signal` (note the transformation is inplace).

**Input:**
* A character string to transform uppercase letters to lowercase and lowercase letters to uppercase

**Output:**
* The transformed result in `signal`

Test:
```cpp
char signal[] = "hello world" ;
recover(signal);
cout << signal;
```
Result:
```
HELLO WORLD
```

Test:
```cpp
char signal[] = "CSE HCMUT" ;
recover(signal);
cout << signal;
```
Result:
```
cse hcmut
```
Test:
```cpp
char signal[] = "I waNT tO hAVe 10 MaRk In FudaMenTAL of PRogRamInG couRsE." ;
recover(signal);
cout << signal;
```
Result:
```
i WAnt To HavE 10 mArK iN fUDAmENtal OF prOGrAMiNg COUrSe.
```