void mostFrequentCharacter(char* str, char& res, int& freq) {
    // Write your code 
    int len=0;
    while(str[len] != '\0'){
        len++;
    }
    char unique[100];  
    int uniqueCount = 0;

    // Chuyển hết sang chữ thường
    for (int i = 0; i < len; i++) {
        str[i] = tolower(str[i]);
    }

    // Lọc ký tự vào mảng unique[]
    for (int i = 0; i < len; i++) {
        bool found = false;
        for (int j = 0; j < uniqueCount; j++) {
            if (str[i] == unique[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            unique[uniqueCount++] = str[i];
        }
    }

    // Đếm tần suất và tìm ký tự xuất hiện nhiều nhất
    freq = 0;
    res = 'z' + 1;

    for (int i = 0; i < uniqueCount; i++) {
        char current = unique[i];
        int count = 0;
        for (int j = 0; j < len; j++) {
            if (str[j] == current) {
                count++;
            }
        }
        if (count > freq || (count == freq && current < res)) {
            freq = count;
            res = current;
        }
    }
}
