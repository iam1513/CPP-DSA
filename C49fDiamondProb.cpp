// base class has multiple parentclasses having a common ancestor class
/*
                                class f
                              /         \
                             /           \
                        class d        class e
                            |             |
                            |             |
                        class b        class c
                             \           /
                              \         /
                                class a 
*/

#include<iostream>
using namespace std;

class Parent{
public: 
    Parent(){
        cout<<"Parent class"<<endl;
    }
};

class Child1: public Parent{
public: 
    Child1(){
        cout<<"Child1 class"<<endl;
    }
};

class Child2: public Parent{
public: 
    Child2(){
        cout<<"Child2 class"<<endl;
    }
};

class GrandChild: public Child1, public Child2{
public:
    GrandChild(){
        cout<<"GrandChild class"<<endl;
    }    
};

int main(){
    
    GrandChild c;

    return 0;
}