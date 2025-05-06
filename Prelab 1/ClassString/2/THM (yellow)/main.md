```cpp
void findAllIndex(string s1, string s2){
    // TO DO
    bool found = false;
    int i = s1.find(s2);
    while (i != string::npos){
        found = true;
        if (s1.find(s2, i + 1) == string::npos)
            cout << i;
        else
            cout << i << " ";
        i = s1.find(s2, i + 1);
    }
    if (!found) cout << -1;
}
```