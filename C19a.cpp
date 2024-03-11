//Given a boolean 2D array, where each row is sorted.Find the row with the maximum number of 1s.
#include<iostream>
#include<vector>
using namespace std;

int maximumOnesRow(vector<vector<int> > &V){

    int maxOnes=INT32_MIN;
    int maxOnesRow = -1;
    int columns = V[0].size();

    for(int i=0;i<V.size();i++){
       for(int j=0;V[i].size();j++){
        if(V[i][j]==1){
            int numberOfOnes = columns - j;
            if(numberOfOnes > maxOnes){
                maxOnes = numberOfOnes;
                maxOnesRow = i;
            }
            break;
        }
       } 
      
    }

    return maxOnesRow;
}

int main(){

    int n,m;
    cin>>n>>m;

    vector<vector<int> > vec(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }

    int res = maximumOnesRow(vec);
    cout<<res<<endl;

    return 0;
}