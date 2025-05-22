#include <iostream>
using namespace std;
struct node
{
  int data;
  node *next;
  node(int data)
  {
    this->data = data;
    this->next = nullptr;
  }
};

node *createLinkedList(int n)
{
    int x;
    cin>>x;
    node* head = new node(x);
    for (int i = 1; i < n; i++)
    {
        cin>>x;
        node* tmp = new node(x);
        tmp->next = head;
        head = tmp;
    }
    return head;
}

bool isEqual(node *head1, node *head2)
{
    while (head1 != nullptr && head2 != nullptr)
    {
        if (head1->data != head2->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if (head1 == nullptr && head2 == nullptr)
    {
        return true;
    }
    return false;
}
int countNode(node* head)
{
    int res = 0;
    while (head)
    {
        head = head->next;
        res++;
    }
    return res;
}
int main()
{
  int n = 0;
  cin>> n;
  node *head1 = createLinkedList(n);
  int m = 0;
  cin>> m;
  node *head2 = createLinkedList(m);
  cout << isEqual(head1, head2) << endl;
  return 0;
}
