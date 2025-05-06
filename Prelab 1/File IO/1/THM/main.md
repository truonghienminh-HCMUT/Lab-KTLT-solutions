```cpp
void calSum(string fileName)   {
    // TODO
    freopen(fileName.c_str(), "r", stdin);
    string s;
    int sum = 0;
    while (cin >> s){
        sum += stoi(s);
    }
    cout << sum;
}
```