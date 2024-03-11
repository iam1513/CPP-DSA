//Rotation of Matrix

//Given a square matrix, turn it by 90 degrees in clockwise direction without using any extra space.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotateArray(vector<vector<int> >& vec){

    int n = vec.size();

    //Transpose
    for(int i = 0; i<n;i++){
        for(int j=0;j<i;j++){
           swap(vec[i][j],vec[j][i]);   
        }
    }

    //reverse every row
    for(int i=0;i<n;i++){
        reverse(vec[i].begin(),vec[i].end());
    }
}

int main(){
    int n;
    cin>>n;

    vector<vector<int> > vec(n,vector<int> (n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>vec[i][j];
        }
    }

    rotateArray(vec);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}