```cpp
void process(string fileName)   {
    // TODO
    ifstream in(fileName);
    double n, m, x, global = -1e11, local;
    in >> n >> m;
    while (n--){
        local = -1e11;
        for (int i = 0; i < m; i++){
            in >> x;
            local = (local > x) ? local : x;
        }
        global = (global > local) ? global : local;
        cout << local << " ";
    }
    cout << global;
    in.close();
}
```