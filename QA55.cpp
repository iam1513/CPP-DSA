#include<iostream>
using namespace std;
int main()
{
    int a=5;
    
    for(int i=0;i<a;i++){
     for(int j=0;j<a;j++){
        if(i==j || i+j==(a-1)){cout<<"*";}
        else{cout<<" ";}
     }
     cout<<endl;
    }
    return 0;
}