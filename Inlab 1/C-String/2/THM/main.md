```cpp
// Student may implement another function as need
const int MAX = 100;
void printFirstRepeatedWord(char str[]) {
    // TODO
    char *token = strtok(str, " ");
    char *words[MAX];
    int count = 0;

    while (token != NULL) {
        for (int i = 0; i < count; i++) {
            if (strcmp(words[i], token) == 0) {
                cout << token;
                return;
            }
        }
        words[count++] = token;
        token = strtok(NULL, " ");
    }
    
    cout << "No Repetition";
} 
```