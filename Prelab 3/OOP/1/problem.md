Cho định nghĩa class:

```cpp
class ClockType
{
   public:
      void setTime(int, int, int);
      void getTime(int&, int&, int&) const;
      void printTime() const;
      clockType(int, int, int); //constructor with parameters
      clockType(); //default constructor
   private:
      int hr;
      int min;
      int sec;

};
```
Cho đoạn code sau:

```cpp
clockType myClock; 
int hours; 
int minutes; 
int seconds;
myClock.getTime(hours, minutes, seconds); 
cout << "hours = " << hours << ", minutes = " << minutes << ", seconds = " << seconds << endl;
```

Trong câu lệnh myClock.getTime(hours, minutes, seconds); hàm thành viên getTime được thực thi. Các giá trị hr, min và sec của myClock được hàm sử dụng để cài đặt giá trị của ba biến hours, minutes, seconds tương ứng.

Yêu cầu: SV hiện thực phương thức getTime để thực hiện được mô tả như trên.

Lưu ý: hr, min, sec cần thoả mãn các điều kiện sau. Nếu tham số đầu vào không thoả mãn điều kiện bên dưới thì ta gán giá trị 0 cho biến thành viên tương ứng.

0 <= hr < 24

0 <= min < 60

0 <= sec < 60

[English]

Given the class definition:

```cpp
class ClockType
{
   public:
      void setTime(int, int, int);
      void getTime(int&, int&, int&) const;
      void printTime() const;
      clockType(int, int, int); //constructor with parameters
      clockType(); //default constructor
   private:
      int hr;
      int min;
      int sec;
};
```
And the following code fragment:

```cpp
clockType myClock; 
int hours; 
int minutes; 
int seconds;
myClock.getTime(hours, minutes, seconds); 
cout << "hours = " << hours << ", minutes = " << minutes << ", seconds = " << seconds << endl;
```

In the statement myClock.getTime(hours, minutes, seconds); getTime member function is executed. The hr, min, and sec values of myClock object are used by the function to set the values of the three variables hours, minutes, and seconds respectively.


Requirement: Student implements the getTime method for it to do as described above.
Note: hr, min, sec need to satisfy the following conditions. If the input parameter does not satisfy the condition below, we assign the value 0 to the corresponding member variable:

0 <= hr < 24

0 <= min < 60

0 <= sec < 60

Test 1:
```cpp
ClockType myClock;
myClock.setTime(5, 4, 30);
int hours,minutes,seconds;
myClock.getTime(hours, minutes, seconds);
cout << "Hours = " << hours << ", minutes = " << minutes << ", seconds = " << seconds << endl;
```

Result:
```
Hours = 5, minutes = 4, seconds = 30
```

Test 2:
```cpp
ClockType myClock(25, 61, 61);
int hours,minutes,seconds;
myClock.getTime(hours, minutes, seconds);
cout << "Hours = " << hours << ", minutes = " << minutes << ", seconds = " << seconds << endl;
```

Result:
```
Hours = 0, minutes = 0, seconds = 0
```