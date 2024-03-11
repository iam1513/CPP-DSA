//FirstnFactorialNo
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int factorial=1;
    for(int i=1;i<=n;i++){
      
      factorial*=i;
      cout<<factorial<<endl;
    }

    return 0;
}

//Using While Loop

/*
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int fact = 1;

    while(n>0){
        fact = fact*n;
        n--;
    }

    cout<<"Factorial of the number is: "<<fact;

    return 0;
}
*/