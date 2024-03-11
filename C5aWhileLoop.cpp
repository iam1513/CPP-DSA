//Iterative Statements/Loops

//While Loop
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int sum=0;

    int i=1;//Loop Variable
    while(i<=n){
        sum+=i;
        i++;
    }

    cout<<sum<<endl;

    return 0;
}