//Basic Problem Solving in Arrays
//Pattern:Target sum:-Find the total no of pairs in the array whose sum is equal to the given value x.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int array[]={3,4,6,7,1};
    int targetsum=7;

    int size=5;

    int pairs=0;

    for(int i=0;i<size;i++){
        for (int j= i+1; j<size; j++)
        {
           if(array[i]+array[j]==targetsum){
            pairs ++;
           }
        }
        
    }

    cout<<pairs<<endl;

    return 0;
}