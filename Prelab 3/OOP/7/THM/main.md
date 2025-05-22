```cpp
class ClockType
{
public:
    ClockType();
      
    void setTime(int, int, int);
    void printTime() const;

private:
    int hr;
    int min;
    int sec;
};

void ClockType::printTime() const
{
   if (hr < 10)
      cout << "0";
   cout << hr << ":";
   if (min < 10)
      cout << "0";
   cout << min << ":";
   if (sec < 10)
      cout << "0";
   cout << sec;
}

// TODO
void ClockType::setTime(int h, int m, int s){
    hr = (0 <= h && h < 24) ? h : 0;
    min = (0 <= m && m < 60) ? m : 0;
    sec = (0 <= s && s < 60) ? s : 0;

}
```