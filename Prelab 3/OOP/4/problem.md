Hãy thiết kế một class Integer với một biến private val dạng int, Class gồm các phương thức sau:

- constructor nhận biến val ban đầu. 
- setValue() để thay đổi giá trị biến val.
- getValue() để lấy giá trị biến val.

[English]

Define a class Integer with one private variable val type int with:
- A constructor with one input for val.
- A function setValue() to change the value of val.
- A function getValue() to return the value of val.

Test:
```cpp
cout<<"Constructor test";
Integer i(10);
Integer i2(-10);
Integer *i3=new Integer(20);
delete i3;
```

Result:
```
Constructor test
```

