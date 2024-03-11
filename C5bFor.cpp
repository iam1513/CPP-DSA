#include<iostream>
using namespace std;
int main()
{
    /*for(init-statemnt; condition; final-expression){//code}*/
    
   int n;
   cin>>n;

   int sum=0;
   for(int i=0;i<=n;i++){
    sum+=i;
   }

   cout<<sum<<endl;

   return 0;
}