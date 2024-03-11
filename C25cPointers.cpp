#include<iostream>
using namespace std;

int main(){

    int arr[2] ={1,19};

    int *ptr = &arr[0];

    cout<<ptr<<" "<<*ptr<<endl;

    cout<<*ptr++<<endl; //First it will print *ptr and then it will move to +1 and next time it will print *ptr++

    cout<<arr[0]<<" "<<arr[1]<<endl;
    cout<<ptr<<" "<<*ptr<<endl; 

    return 0;
}