class Integer
{
private:
    int val;
public:
    Integer(int v);
    ~Integer() = default;
    void setValue(int v);
    int getValue();
};

Integer::Integer(int v)
{
    this->val = v;
}
void Integer::setValue(int v)
{
    this->val = v;
}
int Integer::getValue()
{
    return this->val;
}