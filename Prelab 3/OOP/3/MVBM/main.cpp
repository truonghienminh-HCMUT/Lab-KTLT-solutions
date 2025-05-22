#include <bits/stdc++.h>

using namespace std;

class Room
{
private:
    int length, breadth, heigth;
public:
    Room(int l, int b, int h);
    ~Room() = default;
    int calculateArea();
    int calculateVolume();
};

Room::Room(int l, int b, int h)
{
    this->length = l;
    this->breadth = b;
    this->heigth = h;
}
int Room::calculateVolume()
{
    return this->length * this->breadth * this->heigth;
}
int Room::calculateArea()
{
    return this->length * this->breadth;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}