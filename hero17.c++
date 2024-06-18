#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &stack, int element){
    if(s.empty()){
        stack.push(element);
        return ;
    }
    int num1=s.top();
    s.pop();
    //recursive call
    insertAtBottom(s,element);
    s.push(num1);
}
void reverseStack(stack<int> &stack){
    //base case
    if(stack.empty()){
        return;
    }
    int num=stack.top();
    stack.pop();

    //recursive call
    reverseStack(stack);
    insertAtBottom(stack,num);
}
int main(){


}