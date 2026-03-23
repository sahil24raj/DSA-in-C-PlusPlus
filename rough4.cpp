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
    a->next = b;
    node *head = a;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}