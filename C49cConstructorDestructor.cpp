/*
    - use to initialise an object
    - this is the fuction which is called when object is created
    - same name as class name

    *Types
        - default
        - parameterised
        - copy
*/

/*
    - function is called when object is deleted
    - cant pass any parameters
    - name -> ~(class_name)
*/

#include<iostream>
using namespace std;

class Rectangle{
public:
    int l;
    int b;

    Rectangle(){ // default constructor - no arg passed
        l = 0;
        b = 0;
    }

    Rectangle(int x, int y){ // parameterised constructor -  arg passed
        l = x;
        b = y;
    }

    Rectangle(Rectangle& r){ // copy constructor - initialise an obj by another existing obj
        l = r.l;
        b = r.b;
    }

    ~Rectangle(){ // Destructor
        cout<<"Destructor is called"<<endl;
    }
};

int main(){

    Rectangle* r = new Rectangle();
    cout<<r->l<<"  "<<r->b<<endl;// dont forget to put arrow when ptr is used
    delete r;//This delete command can onlly be used when we create a ptr

    //r will be deleted first as we used delete

    Rectangle r1;
    cout<<r1.l<<"  "<<r1.b<<endl;

    Rectangle r2(2,3);
    cout<<r2.l<<"  "<<r2.b<<endl;

    Rectangle r3 = r2;
    cout<<r3.l<<"  "<<r3.b<<endl;

    return 0;
}