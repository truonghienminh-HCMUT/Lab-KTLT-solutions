```cpp
bool isEqual(node *head1, node *head2)
{
    while (head1) {
        if (head1->data != head2->data) return false;
        else head2=head2->next;
        head1=head1->next;
        if ((!head1&&head2) || (head1&&!head2)) return false;
    }
    return true;
}
```
