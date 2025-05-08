 

[Tiếng Việt]

Một hàm tìm ước số chung lớn nhất của 2 số nguyên dương có thể viết thông qua đệ quy và vòng lặp đơn giản. Bạn hãy viết hàm gcdRecursion để hiện thực tìm ước chung lớn nhất bằng đệ quy và hàm gcdIteration để tìm ước số chung lớn nhất bằng vòng lặp

Đầu vào:

Lần lượt 2 số nguyên p, q (1 ≤ p,q < 109 ).

Đầu ra:

Hàm gcdRecursion và gcdIteration lần lượt trả về giá trị là ước chung lớn nhất của p, q

[English] 

A function that finds the greatest common divisor of two positive integers can be written through simple recursion and looping. You write the function gcdRecursion to perform the greatest common divisor by recursion and the function gcdIteration to find the greatest common divisor by loop.

Input:

Two integers p, q respectively (1 ≤ p,q < 109).

Output:

 

The gcdRecursion and gcdIteration functions return the greatest common divisor of p, q, respectively.

```cpp
Template of full code:
#include<iostream>
#include<string>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

/* END of library */


int gcdRecursion(int p, int q)
{
    // BEGIN YOUR IMPLEMENTATION [1]
    // TODO
   
    // END YOUR IMPLEMENTATION [1]
}

int gcdIteration(int p, int q)
{
    // BEGIN YOUR IMPLEMENTATION [2]
    // TODO
   
    // END YOUR IMPLEMENTATION [2]
    return 0;
}

int main()
{
    hiddenCheck();
    int p,q;
    cin>>p>>q;
    cout<<gcdRecursion(p,q)<< " "<<gcdIteration(p,q);
    return 0;
}
```

Test 1:

Input:
```
5 5
```

Result:
```
5 5
```