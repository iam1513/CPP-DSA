//ConversionOfDecimalToBinary
/*
Parity digit-->n/2==remainder
rem 1 == parity odd of n
rem 0 == parity even of n

ex: 14 --->parity 1110--->Decimal of 14
    5  --->parity 101 --->Decimal of 5
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int ans=0;
    int power=1;

    while (n>0)
    {
        int paritydigit=n%2;
        ans+=paritydigit*power;
        power*=10;
        n/=2;
    }
    cout<<ans<<endl;

    return 0;
}