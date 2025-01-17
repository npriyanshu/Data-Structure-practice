#include<iostream>
using namespace std;
class Node
{

public:
int data;
Node* next;
            Node(){
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }

    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        };  
    }


    void InsertAtHead(Node* &head, int d){

    Node* temp = new Node(d);
    temp->next= head;
    head = temp;
  
}
void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next= temp;
    tail = temp;
}

void InsertAtPosition(Node* &head,Node* &tail,int position,int d){
    if(position == 1){
        InsertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
if(temp->next==NULL){
InsertAtTail(tail,d);
return;
}

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}

void  printList(Node* &head){
 Node* temp = head;
 while (temp != NULL)
 {
cout<<temp->data<<" ";
temp = temp->next;
 }
 cout<<endl;
 
}
};