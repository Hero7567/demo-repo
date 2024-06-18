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

};

void InsertionAtHead(Node* &head, int d){
    // new node created
    Node* temp=new Node(d);
    temp -> next= head;
    head = temp;
    
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
cout<< node1-> data<< endl;
cout<< node1-> next<< endl;

//head pointed to node1
Node* head= node1;
print(head);
cout<<endl;

InsertionAtHead(head , 12);
print(head);
cout<<endl;

InsertionAtHead(head , 15);
print(head);
return 0;




//    Node* node1=new Node(10);
//    cout<<node1->data<<endl;
//    //cout<<node1->next<<endl;
//  Node* node2=new Node(111);
//    node1 -> next =node2;
//   cout<<node1->next<<endl;
//    cout<<node2->data<<endl;
//    cout<<node2->next<<endl;

    return 0;
}