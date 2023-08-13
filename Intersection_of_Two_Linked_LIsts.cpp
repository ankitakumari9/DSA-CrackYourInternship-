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

 int getListLength( Node* head){
       int cnt = 0;
       Node* curr = head;

       while(curr != NULL){
           cnt++;
           curr = curr -> next;
       }
       return cnt;       
    }
    
    Node *getIntersectionNode(Node *headA, Node *headB) {
        int lenA = getListLength(headA);
        int lenB = getListLength(headB);

        while(lenA > lenB){
            lenA--;
            headA = headA -> next;
        }

        while(lenB > lenA){
            lenB--;
            headB = headB -> next;
        }

        while(headA != headB)
        {
            headA = headA -> next;
            headB = headB -> next;
        }
        return headA;
    }

    int main()
{
    Node *node1 = new Node(4);
    Node *headA = node1;
    Node *tailA = node1;

    insertAtPosition(tailA, headA, 2, 1);
    insertAtPosition(tailA, headA, 3, 8);
    insertAtPosition(tailA, headA, 4, 4);
    insertAtPosition(tailA, headA, 5, 5);


    Node *node2 = new Node(5);
    Node *headB = node2;
    Node *tailB = node2;

    insertAtPosition(tailB, headB, 2, 6);
    insertAtPosition(tailB, headB, 3, 1);
    insertAtPosition(tailB, headB, 4, 8);
    insertAtPosition(tailB, headB, 5, 4);
    insertAtPosition(tailB, headB, 6, 5);

    Node* temp = getIntersectionNode(headA , headB);
    cout<<"The two lists intersect at "<<temp -> data<<endl;
    return 0;
}