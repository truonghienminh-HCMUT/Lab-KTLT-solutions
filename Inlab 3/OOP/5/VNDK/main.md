```
class Integer {
private:
    int val;

public:
    void print();
    Integer(int num) : val(num) {}
    Integer(Integer* point) : val(point->val) {}

    Integer operator+(Integer& point) {
        return Integer(val + point.val);
    }

    Integer operator+(int number) {
        return Integer(val + number);
    }
};
```
