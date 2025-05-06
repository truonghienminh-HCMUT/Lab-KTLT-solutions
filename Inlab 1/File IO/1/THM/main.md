```cpp
void uppercase(string output)   {
    // TODO
    string s;
    cin >> s;
    ofstream out(output);
    for (int i = 0; i < s.length(); i++){
        if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
    }
    out << s;
    out.close();
}
```