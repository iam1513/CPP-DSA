//Doubt
#include<iostream>
using namespace std;
int main()
{
    int n, first , second , third , fourth , fifth , sum;
    cout<<"Enter a Five digit number "<<endl;
    cin>>n;
    /*Take out each digit of this number and then finally add the first and the second last digits*/
    first = n/10000;
    n = n%10000;
    second = n/1000;
    n = n%1000;
    third = n/100;
    n = n%100;
    fourth = n/10;
    n = n%10;
    fifth = n;
    n = n%1;

    sum = first + fourth;
    cout<<"Sum of the first and fourth digit is: "<<sum<<endl;
    return 0;
}