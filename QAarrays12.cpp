//Given an innteger array and its size , find the sum of the greatest and the smallest integer present in the array.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int array[]={40,2,3,4,60};

    int max=array[0];
    int min=array[0];

    for (int i = 0; i < 5; i++)
    {
        if(array[i]>max){
            max=array[i];
        }
        if(array[i]<min){
            min=array[i];
        }
    }
    
    int ans=min+max;
    cout<<ans<<endl;

    return 0;
}