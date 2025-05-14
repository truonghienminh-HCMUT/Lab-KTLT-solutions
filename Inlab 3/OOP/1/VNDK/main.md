```
template <class T>
class ColoredCell : public Cell<T> {
protected:
    Color paint;

public:
    void setColor(Color c) {paint = c;}

    Color getColor() {return paint;}

    T* get() {
        if (paint == White) return NULL; 
        else return &(this->infor);
    }
};
```
