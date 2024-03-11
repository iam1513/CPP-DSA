#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter Your Marks "<<endl;
    cin>>marks;

    if (marks>=90 && marks<=100)
    {
        cout<<"Your Grade is A+."<<endl;
    }

    else if (marks>=80 && marks<=90)
    {
        cout<<"Your Grade is A."<<endl;
    }
    
    else if (marks>=70 && marks<=80)
    {
        cout<<"Your Grade is B+."<<endl;
    }

    else if (marks>=60 && marks<=70)
    {
        cout<<"Your Grade is B."<<endl;
    }

    else if (marks>=50 && marks<=60)
    {
        cout<<"Your Grade is C."<<endl;
    }

    else if (marks>=40 && marks<=50)
    {
        cout<<"Your Grade is D."<<endl;
    }

    else if (marks>=30 && marks<=40)
    {
        cout<<"Your Grade is E."<<endl;
    }

    else
    {
        cout<<"Your Grade is F."<<endl;
    }
    return 0;
}