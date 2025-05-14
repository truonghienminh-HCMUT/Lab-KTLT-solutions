```
int main() {
    int n;
    cin>>n;
    Course* C_array = new Course[n];
    for (int i=0; i<n; i++) {
        C_array[i].getinfo();
    }
    for (int i=0; i<n; i++) {
        C_array[i].disinfo();
    }
    return 0;
}
```
