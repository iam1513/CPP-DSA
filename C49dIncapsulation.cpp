/*
    ENCAPSULATION
        - binding of methods and var together into a single unit[class]
        - data is only accessible from class methods
        - also leads to data abstraction[hiding] ===> Abstract data type (ADT) 

*/

#include<iostream>
using namespace std;

class ABC{

    int x;

    public:

    void set(int n){
        x = n;
    }

    int get(){
        return x;
    }
};

int main(){

    // x is private , so we cant directly get value of x
    // so we use get and set functions

    ABC obj1;
    obj1.set(3);
    cout<<obj1.get()<<endl;

    return 0;
}