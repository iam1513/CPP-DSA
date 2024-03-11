//Pointers: Type of variables that stores address
//Data_type*pointers_name;
#include<iostream>
using namespace std;
int main(){
    int x = 18;
    float y = 7.9;

    //Create a ptr that can store add of x;
    //As x is an int var , so we need a pointer that can store add of int type
    int *ptr = &x;
    cout<<"Address stored inside the ptr is:"<<ptr<<endl;
    cout<<"Value stored at the address stored by ptr is:"<<*ptr<<endl; //Derefrencing
    //We can use *ptr to actually access value stored on the add by ptr

    //Create a ptr that can store add of y;
    //As x is an float var , so we need a pointer that can store add of float type
    float *ptrf = &y;
    cout<<"Address stored inside the ptr is:"<<ptrf<<endl;
    cout<<"Value stored at the address stored by ptr is:"<<*ptrf<<endl; //Derefrencing

    x = 23; // The bucket x updated the value the value from -> 23
    //But ptr will still point to same address

    cout<<"New updated value x "<<x<<endl;
    cout<<"ptr will still point same memory location which has 23 instead of 18 now "<<*ptr<<endl;

    //Updating x with pointer 
    *ptr = 50;
    cout<<"New value of x "<<x<<endl;
    cout<<"New value pointed by ptr "<<*ptr<<endl;

    int valueAtX = *ptr;
    cout<<valueAtX<<endl;


    return 0;
}