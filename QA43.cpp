#include<iostream>
using namespace std;
int main()
{
    int CP, SP;
    cout<<"The cost price is "<<endl;
    cin>>CP;
    cout<<"The selling price is "<<endl;
    cin>>SP;

    int profit;
    int loss;
    profit = SP - CP;
    loss = CP - SP;

    if(SP>CP){
        cout<<"Profit:"<<profit<<endl;
    }

    else if(SP==CP){
        cout<<"No profit no loss "<<endl;
    }

    else{
        cout<<"Loss:"<<loss<<endl;
    }
    return 0;
}