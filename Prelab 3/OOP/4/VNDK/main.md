```cpp
void ClockType::getTime(int &h, int &m, int &s) const {
    if (hr >= 0 && hr < 24) h = hr; else h = 0;
    if (min >= 0 && min < 60) m = min; else m = 0;
    if (sec >= 0 && sec < 60) s = sec; else s = 0;
}
```
