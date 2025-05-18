```cpp
class Integer {
    private:
        int val;
    public:
        Integer(int val);
        void setValue(int val);
        int getValue();
};

Integer::Integer(int val) : val(val) {}

void Integer::setValue(int val){
    this->val = val;
}

int Integer::getValue(){
    return this->val;
}

```