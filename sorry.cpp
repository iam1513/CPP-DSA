#include<iostream>
using namespace std;
int main()
{ int n=6;
   int m=6;

  { for (int i = 1; i <=n; i++)
   {
    for (int j = 1; j <=m; j++)
    {
        if (i==4 && j==6)
       {
         cout<<"*";
       }
       
       else if(i==4 || i==6){
            cout<<" ";
        }
        
        else if ( i==1 || i==3|| i==5 || j==1 )
       {
        cout<<"*";
       }
       else{
        cout<<" ";
       }
    }
    cout<<endl;
   }}
  
   {int n=6;
    int m=6;

    for(int i=1;i<=6;i++){
        for(int j=1;j<=m;j++){
            if(i==6){
                cout<<" ";
            }
            else if(i==1 || j==1 || i==5 || j==m){cout<<"*";
            }
        
        else{
            cout<<" ";
        }
    }
    cout<<endl;}}
   
{ int n=7;
   int m=6;

  { for (int i = 1; i <=n; i++)
   {
    for (int j = 1; j <=m; j++)
    {
        if (i==7)
        {
            cout<<" ";
        }
        
       else if (i==5 && j==1 )
       {
        cout<<"*";
       }

       else if (i==6 && j==1)
       {
        cout<<"*";
       }

       else if (i==6 && j==6)
       {
        cout<<"*";
       }
       
       else if (i==4 && j==3)
       {
        cout<<"*";
       }

       else if (i==5 && j==5)
       {
        cout<<"*";
       }
       
       else if(i==5){
            cout<<" ";
        }

        else if(i==6){
            cout<<" ";
        }
        
        else if ( i==1 || i==3|| i==n || j==1 || i==2 && j==6)
       {
        cout<<"*";
       }
       else{
        cout<<" ";
       }
    }
    cout<<endl;
   }}}

   { int n=7;
   int m=6;

  { for (int i = 1; i <=n; i++)
   {
    for (int j = 1; j <=m; j++)
    {
        if (i==7)
        {
            cout<<" ";
        }
        
       else if (i==5 && j==1 )
       {
        cout<<"*";
       }

       else if (i==6 && j==1)
       {
        cout<<"*";
       }

       else if (i==6 && j==6)
       {
        cout<<"*";
       }
       
       else if (i==4 && j==3)
       {
        cout<<"*";
       }

       else if (i==5 && j==5)
       {
        cout<<"*";
       }
       
       else if(i==5){
            cout<<" ";
        }

        else if(i==6){
            cout<<" ";
        }
        
        else if ( i==1 || i==3|| i==n || j==1 || i==2 && j==6)
       {
        cout<<"*";
       }
       else{
        cout<<" ";
       }
    }
    cout<<endl;
   }}}

 {
    int n=9;
    int m=7;

    for (int i = 1; i <=9; i++)
    {
        for (int j = 1; j <=7; j++)
        {
           if (i==1 && j==1)
           {
            cout<<"*";
           }
           
           else if (i==2 && j==2)
           {
            cout<<"*";
           }

           else if (i==3 && j==3)
           {
            cout<<"*";
           }
           
           else if (i==4 && j==4)
           {
            cout<<"*";
           }

           else if (i==3 && j==5)
           {
            cout<<"*";
           }

           else if (i==2 && j==6)
           {
            cout<<"*";
           }

           else if (i==1 && j==7)
           {
            cout<<"*";
           }

           else if (i==5 && j==4)
           {
            cout<<"*";
           }

           else if (i==6 && j==4)
           {
            cout<<"*";
           }

           else if (i==7 && j==4)
           {
            cout<<"*";
           }

           else if (i==8 && j==4)
           {
            cout<<"*";
           }

           else if (i==9 && j==4)
           {
            cout<<"*";
           }

           else{
            cout<<" ";
           }
           
        }
        cout<<endl;
    }
 }
 return 0;
}