#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
int main()
{
    node *a = new node{7, nullptr};
    node *b = new node{8, nullptr};
    node *c = new node{9, nullptr};
    node *d = new node{10, nullptr};
    a->next = b;
    b->next = c;
    c->next = d;
    node *head = a;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}