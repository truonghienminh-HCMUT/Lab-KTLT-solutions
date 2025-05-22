Hãy xem xét câu lệnh: 

ClockType myClock (5, 12, 40);

Câu lệnh này khai báo một đối tượng myClock thuộc class ClockType. Ở đây, chúng ta đang truyền ba giá trị kiểu int, giá trị này khớp với kiểu của các tham số chính thức của hàm tạo với một tham số.

Xem xét đoạn code cho trước trong phần trả lời, chú ý đến hàm khởi tạo có 3 tham số. Hãy hiện thực hàm này để sau khi gọi câu lệnh khai báo trên, 3 biến thành viên được lần lượt đặt thành 5, 12, 40.

Hiện thực hàm khởi tạo với không tham số, hàm sẽ gán giá trị 0 cho 3 biến thành viên.
Lưu ý: hr, min, sec cần thoả mãn các điều kiện sau. Nếu tham số đầu vào không thoả mãn điều kiện bên dưới thì ta gán giá trị 0 cho biến thành viên tương ứng.
- 0 <= hr < 24
- 0 <= min < 60
- 0 <= sec < 60

[English]

Consider the following statement:

clockType myClock (5, 12, 40);

This statement declares a variable name myClock belongs to type ClockType with 3 input variables. 

Complete the constructor with 3 parameters in the class given in the answer box so that the time can be printed correctly.

Complete the constructor with 0 parameters that set the value of three attributes to 0.
Note: hr, min, sec need to satisfy the following conditions. If the input parameter does not satisfy the condition below, we assign the value 0 to the corresponding member variable:

- 0 <= hr < 24
- 0 <= min < 60
- 0 <= sec < 60

Test:
```cpp
ClockType myClock;
myClock.printTime();
```

Result:
```
00:00:00
```