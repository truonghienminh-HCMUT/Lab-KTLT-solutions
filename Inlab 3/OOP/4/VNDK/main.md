```cpp
Book::Book(const char* bookname) {
    name = new char[strlen(bookname) + 1];
    strcpy(name, bookname);
}

Book::~Book() {
    delete[] name;
}
```
