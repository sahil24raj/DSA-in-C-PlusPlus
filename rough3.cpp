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
void insertAtTail(Node *&head, int val);
void insertAtPosition(Node *&head, int val, int pos)
{
    if (pos == 0)
    {
        insertAtTail(head, val);
        return;
    }
    Node *new_node = new Node(val);
    Node *temp = head;
    int current_pos = 0;
    while (temp != NULL && current_pos != pos - 1)
    {
        temp = temp->next;
        current_pos++;
    }
    if (temp == NULL)
    {
        delete new_node;
        return;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}
void insertAtTail(Node *&head, int val)
{
    if (head == NULL)
    {
        head = new Node(val);
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new Node(val);
}
void updateAtPosition(Node* &head,int k, int val){
    Node* temp = head;
    int current_pos = 0;
    while(temp != NULL && current_pos != k){
        temp = temp->next;
        current_pos++;
    }
    if(temp == NULL){
        return;
    }
    temp->val = val;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;
    insertAtTail(head, 110);
    display(head);
    insertAtTail(head, 220);
    display(head);
    insertAtPosition(head, 330, 1);
    display(head);
    updateAtPosition(head, 1, 222);
    return 0;
}