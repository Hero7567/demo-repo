#include<iostream>
#include<stdio.h>
using namespace std;

class Node{
public:
int data;
Node* next;

//constructor
Node(int data){
    this -> data= data;
    this -> next = NULL;
}
};