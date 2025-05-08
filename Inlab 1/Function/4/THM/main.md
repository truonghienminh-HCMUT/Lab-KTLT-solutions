bool checkElementsUniqueness(int* arr, int n) {
    // Write your code 
    int count[1001] = {};
    for (int i = 0; i < n; i++){
        count[arr[i]]++;
        if (count[arr[i]] == 2) return false;
    }
    return true;
}