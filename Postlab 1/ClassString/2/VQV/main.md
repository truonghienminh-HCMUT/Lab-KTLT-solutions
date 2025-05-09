```cpp
bool exist(char temp, string c){
    for( char word: c){
        if (temp==word)
        return false;
    }
    return true;
}
int longestNonRepeatSubString(string s) {
    int count=0;
    for(int i=0; i<s.length(); i++){
        string c= "";
        for(int j=i; j<s.length(); j++){
        if(exist(s[j],c)){
            c += s[j];
        }
        else {
            break;
        }
    }
        if (c.length() > count) {
            count = c.length();
        }
    }
    
    return count;
}

int main()  {
    string s;
    cin >> s;
    cout << longestNonRepeatSubString(s);
    return 0;
}
```
