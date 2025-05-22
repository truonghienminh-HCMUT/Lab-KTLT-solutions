```cpp
int countNode(node* head)
{
    for (int i=1; head; i++) {
        if (!head->next) return i;
        else head=head->next;
    }
    return -1;
}
```
