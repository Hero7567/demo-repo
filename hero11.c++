#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    // CONSTRUCTOR
    Node(int data){
        this -> data= data;
        this -> next = NULL;
    }
    //destructor
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }
};
/*
void InsertionAtHead(Node* &head, int d){
    // new node created
    Node* temp=new Node(d);
    temp -> next= head;
    head = temp;
    
}
*/
void InsertionArTail(Node* &tail, int d){
    Node* temp= new Node(d);
    tail -> next = temp;
    tail= tail -> next;
}

void InsertAtPosition(Node* &head ,int position, int d){
    Node* temp= head;
    int cnt=1;
    while (cnt<position-1){
        temp=temp->next;
        cnt++;
    }
Node* nodeToInsert = new Node(d);
nodeToInsert -> next= temp-> next;
temp->next=nodeToInsert;
}

void deletiNode(int position, Node* &head){
    //deleting first and start node
    if(position ==1){
        Node* temp=head;
        head= head->next;
        //memory free start node
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any middle or last node
        Node* curr=head;
        Node* prev = NULL;
        int cnt=1;
        while(cnt<position){
           prev = curr;
           curr = curr->next;
           cnt++;
         }
         prev -> next= curr ->next;
         curr->next=NULL;
         delete curr;
    }
}

void print(Node* &head){
    Node* temp= head;
    while(temp != NULL){
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }
}


int main(){
  Node* node1= new Node(10);
  Node* head= node1;
  Node* tail=node1;
  print(head);
  cout<<endl;

  InsertionArTail(tail, 12);
print(head);
cout<<endl;
 InsertionArTail(tail, 15);
print(head);
cout<<endl;
InsertAtPosition(head, 3, 33);
print(head);
cout<<endl;


cout<<"head  : "<<head->data<<endl;
cout<<"tail  : "<<tail->data<<endl;

deletiNode(4, head);
print(head);

return 0;
}