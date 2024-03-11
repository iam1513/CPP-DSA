/*

DSA

Arrays:-
  It is a data structure which stores a collection of items
  Stores homogeneous items(i.e. all items of same type)
  They have contiguous memory(Blocks will be consecutive means continuously stored one after other)

  #Representation of Array:-
  Index: Tells location of every array
         1st item have 0 , 2nd have 1, and .....

   #Syntax for Array Declaration
   datatype arrayname[array size]{}( Ex: int array[5];)

   #Array Types:-
   >Single Dimensional
   >Multidimensional : Details in next lecture

   #Accessing elements in single dimensional array
   >0 - based indexing[Starting from 0]
   
   #Size Operation in Arrays 
   >sizeof(array)-->Size of memory allocated
   
*/
#include<iostream>
using namespace std;
int main()
{
    
    int array[]={1,2,3,4};

    cout<<sizeof(array)<<endl;
    cout<<sizeof(array)/sizeof(array[0])<<endl;//length

    int array2[4];
    cout<<array2[0]<<endl;
    cout<<array2[1]<<endl;
    cout<<array2[2]<<endl;
    cout<<array2[3]<<endl;


    return 0;
}