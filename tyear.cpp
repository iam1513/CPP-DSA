#include<iostream>
using namespace std;
int main()
{
    int n=8;
    int m=9;

   {int n=10;
    int m=9;

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=m; j++)
        {
            if(i==2 && j==1 || i==3 && j==2 || i==4 && j==3 || i==5 && j==4 || i==6 && j==5 || i==5 && j==6 || i==4 && j==7 || i==3 && j==8 || i==2 && j==9){cout<<"*";}
            else if(i==1 && j==5 || i==2 && j==5 || i==3 && j==5 || i==4 && j==5 || i==5 && j==5 ){cout<<" ";}
            else if(j==5){cout<<"*";}
            else{cout<<" ";}
        }
        cout<<endl;
    }}
    
    
    for (int i = 1; i <=n ; i++)
    {
        for (int j = 1; j<=m; j++)
        {   if(i==1 && j==1){cout<<" ";}
            else if(i==2 || i==5 || i==8 ||j==1 ){cout<<"*";}
            else{cout<<" ";}
        }
        cout<<endl;
    }

    for(int i=1; i<=n;i++){for(int j=1;j<=m;j++){
        if(i==1){cout<<" ";}
        else if(i==5|| i==2 || j==1 || j==m){cout<<"*";}
         else{cout<<" ";}
    }
    cout<<endl;}

    for (int i = 1; i <=n; i++)
   {
    for (int j = 1; j <=m; j++)
    {
        if (i==1){cout<<" ";}
        else if(i==6 && j==9 ||i==7 && j==9 || i==8 && j==9){cout<<" ";}
        else if(i==5 || i==2|| j==1 || j==9 || i==6 && j==4 || i==7 && j==6 || i==8 && j==8 ){cout<<"*";}
        else {cout<<" ";}
        }
    cout<<endl;
   }

    return 0;
}