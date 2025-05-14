```
void replace(node* head, int position, int value)
{
  if (position<0) return;
  for (int i=0; head; i++) {
    if (i==position) {
      head->data=value;
      return;
    }
    head=head->next;
  }
}
```
