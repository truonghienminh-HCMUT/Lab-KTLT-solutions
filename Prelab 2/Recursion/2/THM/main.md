```cpp
int gcdRecursion(int p, int q)
{
    // BEGIN YOUR IMPLEMENTATION [1]
    // TODO
    if (q == 0) return p;
    return gcdRecursion(q, p % q);
    // END YOUR IMPLEMENTATION [1]
}
int gcdIteration(int p, int q)
{
    // BEGIN YOUR IMPLEMENTATION [2]
    // TODO
    while (q != 0) {
        int temp = q;
        q = p % q;
        p = temp;
    }
    return p;
    // END YOUR IMPLEMENTATION [2]
}
```