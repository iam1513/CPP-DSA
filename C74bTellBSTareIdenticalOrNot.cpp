#include<iostream>
#include<vector>
#include<climits>
using namespace std;

bool helper(vector<int> &v1,vector<int> &v2 , int a1,int a2, int minv, int maxv){

    // Find First element in v1 which is within range
    int i;
    for(i = a1; i < v1.size(); i++){
        if(v1[i]>minv && v1[i]<maxv){
            break;
        }
    }

    // Find First element in v2 which is within range
    int j;
    for(j = a2; j < v2.size(); j++){
        if(v2[j]>minv && v2[j]<maxv){
            break;
        }
    }

    // If no element found within range
    if(i == v1.size() && j==v2.size()){
        return true;
    }

    // If only one vector dont have elements in range
    if((i == v1.size() && j != v2.size() )||(i != v1.size() && j == v2.size() )){
        return false;
    }

    // Check if both the elements are equal or not
    if(v1[i]!=v2[j]) {
        return false;
    }


    // Recursively calling left and right subtree
    return helper(v1,v2,a1+1,a2+1,minv,v1[i]) && helper(v1,v2,a1+1,a2+1,v2[j],maxv);

}

bool checkIdenticalBSTs(vector<int> &v1,vector<int> &v2){

    return helper(v1,v2,0,0,INT32_MIN,INT32_MAX);

}

int main(){


    int n;
    cout<<"Enter size : ";
    cin>>n;
    vector<int> v1(n);
    vector<int> v2(n);

    cout<<"Enter vector 1 ";
    for(int i = 0; i < n; i++){
        cin>>v1[i];
    }

    cout<<"Enter vector 1 ";
    for(int i = 0; i < n; i++){
        cin>>v2[i];
    }

    cout<<checkIdenticalBSTs(v1,v2);

    return 0;
}