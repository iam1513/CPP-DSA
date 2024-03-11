//Traversing in Array

/*For each loop:
for(datatype variable:array){}
*/
#include<iostream>
using namespace std;
int main()
{
    int array[]={1,2,3,4};

   // cout<<sizeof(array)<<endl;
   // cout<<sizeof(array)/sizeof(array[0])<<endl;//length

    int size = sizeof(array)/sizeof(array[0]);

    for(int idx=0; idx<size; idx++){
        cout<<array[idx]<<endl;
    }

    //For each loop:Print every element as we cant set end limit
    for(int ele:array){
        cout<<ele<<endl;
    }
   
    //While loop
    int index=0;
    while(index<size){
        cout<<array[index]<<endl;
        index++;
    }

    return 0;
}