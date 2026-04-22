#include <iostream>
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

    void insertAtKthPosition(int data, int k)
    {
        Node *newNode = new Node(data);

        if (k <= 0 || head == NULL)
        {
            newNode->next = head;
            head = newNode;
            return;
        }

        int curr_pos = 0;
        Node *prev = head;
        while (curr_pos < k - 1 && prev->next != NULL)
        {
            prev = prev->next;
            curr_pos++;
        }

        newNode->next = prev->next;
        prev->next = newNode;
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
};

int main()
{
    LinkedList l;
    l.insertAtTail(10);
    l.insertAtTail(20);
    l.insertAtTail(30);
    l.insertAtTail(40);
    l.display();

    l.insertAtKthPosition(25, 2);
    l.display();

    return 0;
}
