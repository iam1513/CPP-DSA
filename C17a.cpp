//Multidimensional array: Array of arrays
// datatype array_name[size1][size2]...[size3]
//2DArray: datatype array_name[row][col];{Row:-horizontal,Column:-vertical}
//why Multidimentional Arrays:- representing grides,faster and simple access,predifined size


//Taking 2D array as input
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int array[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>array[i][j];
        }
    }

   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<array[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}