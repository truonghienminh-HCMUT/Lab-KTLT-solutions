```
node *createLinkedList(int n)
{
  node* head;
  node* tail;
  for(int i=0; i<n; i++) {
    int value;
    cin>>value;
    node* newNode = new node();
    newNode->data=value;
    if (!i) {
      head=newNode;
      tail=newNode;
    }
    else {
      tail->next=newNode;
      tail=tail->next;
    }
  }
  return head;
}
```
