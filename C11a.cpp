//ScopeOfVariablesInC++
//Part of program from where variable is accessible
/*#include<iostream>
using namespace std;
int main()
{
    int apples=5;//Accesible only in this brackett
    cout<<apples;
    return 0;
}*/

//We can define same variables using different data types under same scope, code wont compile

/*
Local variables: Variables that are declared inside the function or block

Global variables: Variables that exits throughout the whole program can be in any part of the program
*/

/*
Formal Parameters:Defined during function defination
Actual Parameters:Passed during function call
*/

/*
Pass by value: Parameters values are copied to another variables
Pass by reference: Parameter values are passed itself
*/

//PassByReference
#include<iostream>
using namespace std;
int main()
{
    int p=5;
    int &q=p;

    q++;
    cout<<p<<endl;

    cout<<&p<<endl;
    cout<<&q<<endl;

    return 0;
}