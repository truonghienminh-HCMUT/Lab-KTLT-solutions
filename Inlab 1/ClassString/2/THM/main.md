```cpp
void deleteWord(string s, string s1){
    //TO DO
    int i = 0;
    while (s[i] != '\0'){
        if (s[i] == s1[0]){
            int j = 0;
            while (j < s1.length() && s[i+j] == s1[j]){
                j++;
            }
            if (j == s1.length()){
                s.erase(i, j);
                i--;
            }
        }
        i++;
    }
    cout << s;
}
```