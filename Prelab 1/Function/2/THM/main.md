```cpp
void sum2(int * array, int numEls, int &result)
{
    // TODO
    // array = &array[0]
    for (int i = 0; i < numEls; i++, array++){
        result += *array;
    }
}
```