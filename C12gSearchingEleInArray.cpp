//LinearSearch:Search if a given element is present in the array or not. If it is not present then -1 else return the index
#include<iostream>
using namespace std;
int main()
{
    int array[]={3,9,18,11,7};
    int key=11;

    int ans=-1;

    for(int i=0;i<5;i++){
        if(array[i]==key){
            ans=i;
            break;//wont search further after the ans index is found
        }
    }

    cout<<ans<<endl;//Index will be printed if present or if it isnt present ans will be printed whats written 

    return 0;
}