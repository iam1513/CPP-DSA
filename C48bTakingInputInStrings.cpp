#include<iostream>
using namespace std;

int main(){
    
    // string str;
    // cin>>str;//cin is 'extraction' operator-Rev
    // cout<<str<<endl;
    // //If we give input "Ash Ketchum", only Ash will be printed coz it prints only before any space 
    // //for ex: If we give "ab cd" as input , only ab will be printed
    // //space acts as terminating character, so only ash is stored

    //So we use getline 

    string str;
    cout<<"Enter the string you wnat to print: ";
    getline(cin,str);//Everthing will be printed
    cout<<str<<endl;

    return 0;
}