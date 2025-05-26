#include <bits/stdc++.h>

using namespace std;

struct node
{
  int data;
  node *next;
  node()
  {
    this->data = 0;
    this->next = NULL;
  }
  node(int x)
  {
    this->data = x;
    this->next = NULL;
  }
};
node *createLinkedList(int n)
{
    int x;
    cin>>x;
    node* head = new node(x);
    node* tmp = head;
    for (int i = 1; i < n; i++)
    {
        cin>>x;
        tmp->next = new node(x);
        tmp = tmp->next;
    }
    return head;
}
node *insertNode(node *head, node *newNode, int position)
{
  if (position <= 0)
  {
    return head;
  }
  if (head==NULL)
  {
    return newNode;
  }
  if (position == 1)
  {
    newNode->next = head;
    return newNode;
  }
  int i = 1;
  node* tmp = head;
  while (tmp->next != NULL)
  {
    if (++i>= position)
    {
      break; 
    }
    tmp = tmp->next;
  }

  newNode->next = tmp->next;
  tmp->next = newNode;
  return head;
}
void replace(node* head, int position, int value)
{
  if (position < 0)
  {
    return;
  }
  int i = 0;
  node* tmp = head;
  while (tmp != NULL)
  {
    if (i==position)
    {
      tmp->data = value;
    }
    i++;
    tmp = tmp->next;
  }
  
}
int searchLinkedList(node* head, int key)
{
  int res = 0;
  while (head!=NULL)
  {
    if (head->data == key)
    {
      return res;
    }
    res++;
    head = head->next;
  }
  return -1;
}
void print(node *head)
{
  while (head != nullptr)
  {
    cout << head->data << endl;
    head = head->next;
  }
}
int main()
{
  int n = 0;
  cin >> n;
  node *head = createLinkedList(n);
  node *newNode = new node();
  cin >> newNode->data;
  int position = 0;
  cin >> position;
  head = insertNode(head, newNode, position);
  print(head);
  return 0;
}

