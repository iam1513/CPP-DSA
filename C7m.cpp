#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            if (i==1 || i==n || j==1 || j==i )
            {
                cout<<i;
            }

            else{cout<<" ";}
            
        }
        
        cout<<endl;
    }
    return 0;
}