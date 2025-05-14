```
ClockType::ClockType(int hr, int min, int sec){
    if (hr<0 || hr>=24) hr=0;
    else ClockType::hr=hr;
    
    if (min<0 || min>=60) min=0;
    else ClockType::min=min;
    
    if (sec<0 || sec>=60) sec=0;
    else ClockType::sec=sec;
}
ClockType::ClockType() : hr(0), min(0), sec(0) {}
```
