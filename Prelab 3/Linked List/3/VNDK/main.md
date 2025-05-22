```cpp
node *createLinkedList(int n)
{   
    node* head = NULL;
    for (int i=0; i<n; i++) {
        int input;
        cin>>input;
        node* curr = new node();
        curr->data=input;
        curr->next=head;
        head=curr;
    }
    return head;
}
```
