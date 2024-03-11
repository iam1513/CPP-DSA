//Find last occurrence of an element
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //1,2,3,2,1,3,1 --->Last occurrence of x is at index 6

    vector<int> v(10);
    for(int i=0;i<10;i++){
        cin>>v[i];
    }

    cout<<"Enter x:";
    int x;
    cin>>x;

    int occurence= -1;
    /*
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurence=i;
        }
    }
    */

    //Traversing from the end
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            occurence=i;
            break;
        }
    }

    cout<<occurence<<endl;

    return 0;
}