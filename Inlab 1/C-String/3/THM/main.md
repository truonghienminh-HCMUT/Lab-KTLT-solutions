```cpp
// Student may implement another function as need

void process(char str[], char outstr[]) {
    // TODO
    char *token = strtok(str, " ");
    strcpy(outstr, "");
    while (token != NULL){
        // cout << "token: " << token << endl;
        strcat(outstr, token);
        strcat(outstr, " ");
        token = strtok(NULL, " ");
    }
}
```