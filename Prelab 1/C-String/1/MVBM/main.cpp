#include <iostream>
#include <cstring>

using namespace std;

void reverse(char str[])
{
    int length = strlen(str);    
    char tmp[length];
    cout<< length;
    for (int i = 0; i < length; i++)
    {
        tmp[length - i - 1] = str[i];
    }
    for (int i = 0; i < length; i++)
    {
        str[i]=tmp[i];
    }
}
int main()
{
    const int MAX_SIZE = 100;
    char str[] = "this is my school";
    reverse(str);
    cout << str;
}