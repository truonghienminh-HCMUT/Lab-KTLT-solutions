```cpp
// Student may implement another function as need

int find(char str[], char substr[]) {
    // TODO
    int idx = -1, i = 0;
    while (str[i] != '\0'){
        if (str[i] == substr[0]){
            int j = 0;
            while (j < strlen(substr) && str[i+j] == substr[j]){
                j++;
            }
            if (j == strlen(substr)){
                idx = i;
                break;
            }
        }
        i++;
    }
    return idx;
}
```