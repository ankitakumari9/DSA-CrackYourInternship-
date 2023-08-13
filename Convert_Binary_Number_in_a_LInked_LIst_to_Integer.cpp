#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* reverse(Node* head){
        if(head == NULL || head -> next == NULL){
            return head;
        }

        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;

        while(curr != NULL){
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }

    int getDecimalValue(Node* head) {
        Node* temp = reverse(head);
        int x , sum = 0, i =  0;
        while(temp != NULL){
            x = temp -> data;
            sum = sum + pow(2, i)*x;
            i++;
            temp = temp -> next;
        }
        return sum;
    }

int main()
{
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;

    insertAtPosition(tail, head, 2, 0);
    insertAtPosition(tail, head, 3, 1);
    print(head);
    cout<<"The decimal value is "<<getDecimalValue(head);
    return 0;
}    