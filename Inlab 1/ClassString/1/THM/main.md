```cpp
void replaceString(string s, string s1, string s2){
    //TO DO
    int start = -1;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == s1[0]){
            int j = 0;
            while (j < s1.length() && s[i+j] == s1[j]){
                j++;
            }
            if (j == s1.length()) start = i;
        }
    }
    if (start == -1){
        cout << s;
        return;
    }
    s.replace(start, s1.length(), s2);
    cout << s;
}
```