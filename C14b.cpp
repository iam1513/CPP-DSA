//Target sum with triplets
//Count the number of triplets whose sum is equal to the given value x.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //Dry Run:To check how variable values change and whats the output
    //[3,1,2,4,0,6]
    //targetsum=6;
    //triplets=0
    //i=0 ; j=1 ; k=2
    //arr[i]=3
    //arr[j]=1
    //arr[k]=2
    //we keep updating this
    
    int array[]={3,1,2,4,0,6};

    int targetsum=6;

    int size=6;

    int triplets=0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            for (int k = j+1; k<size; k++)
            {
                if ( array[i] +array[j]+array[k]==targetsum)
                {
                   triplets++;
                }
                
            }
            
        }
        
    }
    
    cout<<triplets<<endl;

    return 0;
}