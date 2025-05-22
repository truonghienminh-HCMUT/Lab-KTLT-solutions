```cpp
int searchLinkedList(node* head, int key)
{
  for (int i=0; head; i++) {
    if (head->data==key) return i;
    head = head->next;
  }
  return -1;
}
```
