#include<iostream>
using namespace std;
int main(){

    int a[]={1,6,10,4,9};

    int min1=a[0];
    int mins1=a[0];
    
    int idx1=-1;
    for(int i=0;i<5;i++){
        if(a[i]<min1){
           min1=a[i];
           idx1=i;
        } 
    }

    for(int i=0;i<5;i++){
        if(mins1>min1){
            mins1=a[i];
        }
    }
    int b[]={1,2,3,4,5};
    
    int min2=b[0];
    int mins2=b[0];
    
    int idx2=-1;
    for(int i=0;i<5;i++){
        if(b[i]<min2){
           min2=b[i];
           idx2=i;
        }
    }

    for(int i=0;i<5;i++){if(b[i]<mins2){
            mins2=b[i];
        } 
    } 

    int ans = min1+min2;
    
    if(idx1!=idx2){cout<<ans<<endl;}
    else if(idx1=idx2){
        if(min1+mins2 >mins1+min2){cout<<mins1+min2<<endl;}
        else{cout<<min1+mins2<<endl;}
    }
    
    return 0;
}