//
//  delete-Duplicate.cpp
//  Linklist
//
//  Created by AYUSH MISHRA on 02/06/1943 Saka.
//

#include<iostream>
using namespace std;

class Node
{
public:
    
    int data;
    Node* next;
    
    Node(int data)
    {
        this -> data = data;
        next = NULL;
    }
};

Node* deleteDuplicate(Node* &head)
{
    Node* temp = head;
    Node* prevNode = NULL;
    
    while(temp->next!=NULL)
    {
        if(temp->data==(temp->next)->data)
        {
            Node* deleteNode = temp;
            prevNode -> next = temp -> next;
            temp = temp -> next;
            delete deleteNode;
        }
        else
        {
            prevNode = temp;
            temp = temp -> next;
        }
    }
    return head;
}
Node* takeInput()
{
    int data;
    cin>>data;

    Node* head = NULL;
    Node* tail = NULL;

    while(data!=-1)
    {
        Node* newNode = new Node(data);

        if(head==NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail -> next = newNode;
            tail = tail -> next;
        }
        cin>>data;
    }
    return head;
}

void display(Node* head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout << temp -> data << "->";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    Node* head = takeInput();
    display(head);
    Node* newhead = deleteDuplicate(head);
    display(newhead);
}
