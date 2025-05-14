```
class Room {
private:
    double length, breadth, height;

public:
    Room(double l, double b, double h) : length(l), breadth(b), height(h) {}
    double calculateArea() {return length*breadth;}
    double calculateVolume() {return length*breadth*height;}
};
```
