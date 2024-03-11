//NumericalRectangularPattern
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<j;
        }
        
        for(int j=1;j<=(i-1);j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}

//when i=1 that is first row, j in the loop will start from 1.So, in first row 12345 will printed.
//when we come to second row, i is 2 and therefore j will be printed from 2 , that is 2345, similar for next rows.
//and then, values after the end will be printed to complete the rec using another for loop.