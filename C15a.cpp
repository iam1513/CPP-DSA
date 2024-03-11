//Pattern:Two pointers
//Sort an Array consisting of 0s and 1s.
//Sort ex:-
//  Array[]={0,0,1,1,0,1,1,1,0,1}----->Ater sorting{0,0,0,0,1,1,1,1,1,1}
#include<iostream>
#include<vector>
using namespace std;

void sortZeroesAndOnes(vector <int> &v){
    int zero_count=0;
    for(int ele:v){
        if(ele==0){
            zero_count++;
        }
    }

    for(int i=0; i< v.size();i++){
        if (i<zero_count)
        {
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
}

int main(){
    
    int n;
    cin>>n;

    vector<int> v;

    for(int i=0 ; i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sortZeroesAndOnes(v);

    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
     
}