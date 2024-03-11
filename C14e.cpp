//Find the second largest element in the given Array.(When some elments in array have duplicates)
#include<iostream>
using namespace std;

int largetElementIndex (int array[], int size){
    int max= INT16_MIN;
    int index=-1;

    for (int i = 0; i <size; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
            index=i;
        }
        }
    return index;
}

int main(){
    int array[]={2,3,5,7,6,1,7};
    int n=7;
    int indexoflargest = largetElementIndex(array,n);
    
    int largestelement= array[indexoflargest];
    for (int i = 0; i < n; i++)
    {
        if (array[i]==largestelement)
        {
            array[i]=-1;
        }
        
    }

    int indexofsecondlargest= largetElementIndex(array,n);
    cout<<array[indexofsecondlargest]<<endl;

    return 0;
    
}