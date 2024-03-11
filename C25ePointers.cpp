#include<iostream>
using namespace std;
int main(){

    int arr[2]={2,6};

    int *ptr = &arr[0];

    cout<<++*ptr<<endl; // We will start from left , so *ptr value will be increased by 1 and ++ is in front of ptr

    cout<<*++ptr<<endl;

    cout<<++*ptr<<endl;

    return 0;
}