//FuntionPrototype:
//If we want to define a function after the function call, we need to use the function prototype


//StandaardLibraryFunctions:
// pow(a,b) and sqrt(a)--->To use them we have to <cmath> file

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<pow(2,3)<<endl;
    cout<<sqrt(24)<<endl;//Takes input as double and gives output as double

    int ans = sqrt(24);
    cout<<ans<<endl;

    double doubleans=sqrt(24);
    cout<<doubleans<<endl;

    return 0;
}