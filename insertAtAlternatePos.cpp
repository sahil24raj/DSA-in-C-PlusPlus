#include <iostream>
#include <climits>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int data)

    {
        val = data;
        next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }
    void insertAtTail(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void deleteAlternateNodes(Node *&head)
    {
        Node *curr_node = head;
        while (curr_node != NULL && curr_node->next != NULL)
        {
            Node *temp = curr_node->next;
            curr_node->next = curr_node->next->next;
            delete temp;
            curr_node = curr_node->next;
        }
    }
};

int main()
{
    LinkedList l;
    l.insertAtTail(10);
    l.insertAtTail(20);
    l.insertAtTail(30);
    l.insertAtTail(40);
    l.insertAtTail(50);
    l.display();
    l.deleteAlternateNodes(l.head);
    l.display();
    return 0;
}