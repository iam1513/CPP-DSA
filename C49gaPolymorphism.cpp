/*
    - ability of objects/methods to take different forms

    * compile time polymorphism
        - function overloading - no. of functions with same function name but  they perform diff acc to arg passed
*/

#include<iostream>
using namespace std;

class Sum{

public: 
    void add(int x, int y){
        int sum = x + y;
        cout<<sum<<endl;
    }

    void add(int x, int y, int z){
        int sum = x + y + z;
        cout<<sum<<endl;
    }

    void add(float x, float y){
        float sum = x + y;
        cout<<sum<<endl;
    }
};

int main(){

    //Now acc to how many arg we pass , function will be called from a class
    Sum s;
    s.add(2,3);
    s.add(2,3,4);
    s.add(float(2.5),float(3.5));

    return 0;
}