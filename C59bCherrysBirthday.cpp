#include<iostream>
#include<set>
using namespace std;

int main(){

    set<string> invitelist;
    
    int n;
    cout<<"Enter no of guests: ";
    cin>>n;

    cout<<"Enter names of guests : ";
    while(n--){
        string name;
        cin>>name;

        invitelist.insert(name);
    }
    
    cout<<"Final list of Guests is : ";
    for(auto name:invitelist){
        cout<<name<<" ";
    }cout<<endl;

    return 0;
}