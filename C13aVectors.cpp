/*
Vectors in C++:-
>Dynamic arrays(resize when insert or delete elements)
>Contiguous memory allocation

#Basic Operations in Vectors:
>Declaration 
   #include<vector>
   vector<datatype> vector-name;
   vector<datatype>vector-name(size);
   vector<int> V;

>Size
   v.size()--->length;

>Resize
   v.resize(new size);
   v.resize(8);
   v.size()=8

>Capacity
   v.capacity() (Capacity>=size)

   vector<int> v; size=0,capacity=0
   element 1 ---> size=1,capacity=1;
   element 2 ---> size=2,capacity=2;
   element 3 ---> size=3,capacity=4; Capacity increases in power of 2 or just increases as capacity depends on compiler
   element 5 ---> size=5,capacity=8; This happened because existing capacity was 4 and new size was more than than that so it will increase in powers of 2
   
>Add elements
   v.push_back(element)
   Ex:elements are 2,3,4 and if we write v.pushback(5), elements will become 2,3,4,5

   v.insert(position,element)[Position is relative to position of 1st element. We can find position of first elemnt by v.begin() and position by v.end()]
   so if we want to add insert element in above question and we write, v.insert(v.begin+2,5), ans will be 2,3,5,4 as 4 will be inserted on 2nd position after begin

>Delete elements
   v.pop_back()
   like 2,3,4 and we write v.pop-back(), ans will be 2,3

   v.erase(position)[Position is relative to 1st or last element]
   2,3,4,5 ---> v.erase(v.end()-2)--->2,3,5

   v.clear()--->To delete all the elements
   

*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;

    cout<<"size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    
    v.push_back(1); 
    cout<<"size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    
    v.push_back(2); 
    cout<<"size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    
    v.push_back(3); 
    cout<<"size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    
    v.resize(5);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.resize(10);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    return 0;
}