#include<iostream>
#include<stdio.h>
#include <string.h>
using namespace std;
// class Foo{
//     private:
//     int member;
//     public:
//     Foo(int member){
//         this->member=member;
//     }
//     void bar(){
//         cout<<"member = "<<this->member;
//     }
//     void displayText(){
//         cout<<"not accessing any member vbariable"<<endl;
//     }
//     void destroy(){
//         delete this;
//     }
// };
// int main(){
//     Foo *ptr= new Foo(5);
//     ptr->destroy();
//     ptr->displayText();
//     return 0;
// }






//this pointer in constructor
// class Coordinate{
//     private:
//     int x;
//     int y;
//     public:
//     Coordinate(int x, int y){
//         this->x=x;
//         this->y=y;
//     }
//     void printCoordinate(){
//         cout<<"(x,y)=("<<this->x<<","<<this->y<<")"<<endl;
//     }
// };
// int main(){
//     Coordinate pointA(2,3),pointB(5,6);
//     pointA.printCoordinate();
//     pointB.printCoordinate();
//     return 0;
// }






// int count=0;
// class Test{
//     public:
//     Test(){
//         count++;
//         cout<<"no. of object created: "<<count<<endl;
//     }
//     ~Test(){
//         cout<<"no. of object destoyed"<<count<<endl;
//         --count;
//     }
// };
// int main(){
//     Test t, t1, t2, t3;
//     return 0;
// }




// class Box{
// public:
// int* data;
// Box(int value){
//     data=new int;
//     *data=value;
// }
// Box(Box&& other) {
//     cout<<"Move Constructor Called"<<endl;
//     data=other.data;
//     other.data=nullptr;
// }
// ~Box(){delete data;}
// };
// int main(){
//     Box originalBox(42);
//     Box newBox(move(originalBox));
//     cout<<"newBox.data:"<<*newBox.data;
//     return 0;
// }



//Defining of Explicit Copy Constructor with Parameterized Constructor
// class student{
// int rno;
// char name[50];
// double fee;
// public:
// student(int , char[],double);
// student(student &t){
//     rno= t.rno;
//     strcpy(name,t.name);
//     fee=t.fee;
// }
// void display();
// };
// student::student(int no, char n[], double f){
//     rno=no;
//     strcpy(name, n);
//     fee=f;
// }
// void student::display(){
//     cout<<endl<<rno<<"\t"<<name<<"\t"<<fee<<endl;
// }
// int main(){
//     student a1(1001,"Shreyansh",100000);
//     a1.display();
//     student shivansh(a1);
//     shivansh.display();

//     return 0;
// }




//Defining of Explicit Copy Constructor
// class Sample{
//     int id;
//     public:
//     //default constructor with empty body
//     Sample(){}
//     // parametrised constructor
//         Sample(int x){id=x;}
//         //copy constructor
//         Sample(Sample& t){id=t.id;}

//         void display(){
//             cout<<"ID= "<<id;
//         }   
// };
// int main(){
//     Sample obj1(10);
//     obj1.display();
//     cout<<endl;

//     Sample obj2(obj1);
//     obj2.display();

//     return 0;
// }



// class GFG{
// private:
// int data;
// public:
// GFG(int x=0){
//     data=x;
// }
// int getData(){return data;}
// };
// int main(){
//     GFG obj1;
//     GFG obj2(25);
//     cout<<"First Object Data : "<<obj1.getData()<<endl;
//     cout<<"Second Object Data : "<<obj2.getData()<<endl;
//     return 0;
// }




//Defining Parameterized Constructor Outside the Class.
// class student{
//     int rno;
//     char name[50];
//     double fee;
// public:
// student(int , char[],double);
// void display();
// };
// student::student(int no, char n[], double f)
// {
//     rno =no;
//     strcpy(name, n);
//     fee =f;
// }
// void student::display(){

//     cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
// }
// int main(){
//     student s(1001, "Ram",100000);
//     s.display();
//     return 0;
// }




//defining parametrised constructor inside class
// class connstruct{
//     private:
//     int x, y;
//     public:
//     //parametrized constructor
//     connstruct(int x1, int y1){
//         x=x1;
//         y=y1;
//     }
//     int getX(){return x;}
//     int getY(){return y;}
// };
// int main(){
//     connstruct c1(10,15);
//     cout<<"c1.x= "<<c1.getX()<<", c1.y= "<<c1.getY()<<endl;
// }