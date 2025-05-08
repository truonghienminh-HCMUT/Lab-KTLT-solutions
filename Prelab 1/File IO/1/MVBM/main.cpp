#include <string>
#include <fstream>
#include <iostream>
using namespace std;

void calSum(string fileName)   {
    ifstream inp(fileName);
    int a,sum = 0;
    while(inp>>a)
    {
        sum += a;
    }
    cout<<sum;
}