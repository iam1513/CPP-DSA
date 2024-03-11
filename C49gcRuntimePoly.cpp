/*
- resolved at runtime
- using function over riding
*/
#include<iostream>
using namespace std;

class Parent{
    virtual void print(){ // we have to use virtual keyword for this
        cout<<"Parent class"<<endl;
    }
    void show(){
        cout<<"Parent class"<<endl;
    }
};

class Child: public Parent{
public:
    void print(){
        cout<<"Child class"<<endl;
    }
    void show(){
        cout<<"Child class"<<endl;
    }
};

int main(){

    Parent *p;
    Child c;

    p = &c;
    

    return 0;
}