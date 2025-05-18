Hãy thiết kế một class Room với constructor gồm 3 biến length, breadth, height (theo thứ tự). Hiện thực các phương thức sau cho class Room:

- Constructor: đầu vào lần lượt là length, breadth, height
- calculateArea: tính diện tích của căn phòng.
- calculateVolume: tính thể tích của căn phòng

[English]

Define class Room with three variable length, breadth and height and:
- A constructor with three input for length, breadth and height.
- Function calculateArea to calculate and return the room area.
- Function calculateVolume to calculate and return the room volume.

Test:
```cpp
cout<<"Constructor test";
Room r(20,3,4);
Room *r2=new Room(10.5,5.5,5.4);
delete r2;
```

Result:
```
Constructor test
```
