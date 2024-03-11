#include<iostream>
using namespace std;
int main()
{
    int a = 4;//4
    cout<<sizeof(a)<<endl;

    char name = '4';//1
    cout<<sizeof(name)<<endl;

    bool flag;
    a==name? flag = true : flag=false;//0
    cout<<flag<<endl;

    cout<<(&a)<<endl;
    
    return 0;
}