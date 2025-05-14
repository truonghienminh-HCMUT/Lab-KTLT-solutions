```
node *insertNode(node *head, node *newNode, int position)
{
  if (position <= 0) return head;
  if (!head) return newNode;

  if (position == 1) {
      newNode->next = head;
      return newNode;
  }

  node* curr = head;

  int count = 1;
  while (curr && count < position - 1) {
      curr = curr->next;
      count++;
  }

  if (!curr) {
      node* temp = head;
      while (temp->next) {
          temp = temp->next;
      }
      temp->next = newNode;
  } else {
      newNode->next = curr->next;
      curr->next = newNode;
  }
  return head;
}
```
