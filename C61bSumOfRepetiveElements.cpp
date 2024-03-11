#include<iostream>
#include<vector>
#include<map>
using namespace std;

//T.C : O(n)
//S.C : O(m) ---> m = No of unique elements

int main(){

    
    int n;
    cout<<"Enter size of a vector : ";
    cin>>n;

    vector<int> input(n);
    cout<<"Enter elements in the vector : ";
    for(int i=0;i<n;i++){
        cin>>input[i];
    }cout<<endl;

    map<int, int> m;

    for(int i=0;i<n;i++){
        //We stored frequencies of the every element
        m[input[i]]++;
    }

    int sum=0;
    //Finding sum of repetetive elements
    //Pair ---> element and its freq
    for(auto pair:m){
        if(pair.second>1){
            sum+=pair.first;
        }
    }

    cout<<"Ans : "<<sum;

    return 0;
}