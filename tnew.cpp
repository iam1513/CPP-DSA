#include<iostream>
using namespace std;
int main()
{
     int n=8;
    int m=9;

    for(int i=1; i<=n;i++){for(int j=1;j<=m;j++){
        if (i==1)
        {
            cout<<" ";
        }
        else if (j==1 || j==9 || i==2 && j==2 || i==3 && j==3 || i==4 && j==4 || i==5 && j==5 || i==6 && j==6 || i==7 && j==7 || i==8 && j==8)
        {
            cout<<"*";
        }
        
        else{
            cout<<" ";
        }
    }cout<<endl;}
    
    
    for (int i = 1; i <=n ; i++)
    {
        for (int j = 1; j<=m; j++)
        {   if(i==1 && j==1){cout<<" ";}
            else if(i==2 || i==5 || i==8 ||j==1 ){cout<<"*";}
            else{cout<<" ";}
        }
        cout<<endl;
    }
    
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<= m; j++)
        {
           if(i==1 && j==5 || i==1){cout<<" ";}
           else if(i==2 && j==5 || i==3 && j==5 || i==4 && j==5 ){cout<<" ";}
           else if (i==8 || j==1 || j==5 || j==9){cout<<"*";}
           else{cout<<" ";}
        }
        cout<<endl;
        }
    


    return 0;
}