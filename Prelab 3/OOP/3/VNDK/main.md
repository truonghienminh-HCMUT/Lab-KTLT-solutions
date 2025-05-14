```
void ClockType::setTime(int hour, int minute, int second)
{
    if (hour >= 0 && hour < 24) hr = hour;
    else hr = 0;

    if (minute >= 0 && minute < 60) min = minute;
    else min = 0;

    if (second >= 0 && second < 60) sec = second;
    else sec = 0;
}
```
