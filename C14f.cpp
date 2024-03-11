//Find the second largest element in the given Array.(When some elments in array have duplicates)
//Method-2
#include<iostream>
using namespace std;

int secondLargestElement(int array[], int size){
    int max=INT16_MIN;
    int sec_max=INT16_MIN;

    for (int i = 0; i < size; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
    }
    
    for (int i = 0; i < size; i++){
        if(array[i]>sec_max && array[i]!=max){
            sec_max=array[i];
        }
    }

    return sec_max;
}

int main(){
    int array[]={2,3,5,7,6,1,7};
    int n=7;

    cout<<secondLargestElement(array,n)<<endl;
    
    return 0;
}