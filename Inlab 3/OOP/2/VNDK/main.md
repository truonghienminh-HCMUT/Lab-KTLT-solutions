```cpp
void ClockType::incrementSeconds() {
   sec++;
   if(sec==60) {
      sec=0;
      incrementMinutes();
   }
}
void ClockType::incrementMinutes() {
   min++;
   if(min==60) {
      min=0;
      incrementHours();
   }
}
void ClockType::incrementHours() {
   hr++;
   if(hr==24) hr=0;
}
```
