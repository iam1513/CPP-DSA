//Nested If else statement
#include<iostream>
using namespace std;
int main()
{
    int marks;
    cin>>marks;

    if(marks>33){
        if(marks>80){
            cout<<"Gracefully Pass ";
        }

        else{
            cout<<"Pass";
        }
    }

    else{
        cout<<"Fail ";
    }
    return 0;
}