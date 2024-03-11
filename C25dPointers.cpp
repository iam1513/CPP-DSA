#include<iostream>
using namespace std;
int main(){

    int arr[2]={2,5};

    int *ptr = &arr[0];

    cout<<*++ptr<<endl; //It will first increase and then print 

    return 0;
}