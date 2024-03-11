#include<iostream>
using namespace std;

/*
class class_name{
    //by default propts are private, so we have to mak them public

public: 
    data_type data1;
    data_type data2;
}; //; is necessary so it will become a class
*/

class fruit{
public:
    string name;
    string color;
};

int main(){

    fruit apple; // Object
    apple.name = "Apple";
    apple.color = "Red";
    cout<<apple.name<<" - "<<apple.color<<endl;

    fruit *mango = new fruit(); // Making new object using ptr
    mango->name = "Mango";
    mango->color = "Yellow";
    cout<<mango->name<<" - "<<mango->color<<endl;

    return 0;
}