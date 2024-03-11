//Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};

    int even=0;

    int odd=0;

    for (int i = 0; i <5; i++)
    {
        if(arr[i]%2==0){
           even++;
        }

        else{
            odd++;
        }
    }

    cout<<"Count of even: "<<even<<endl;
    cout<<"Count of odd: "<<odd<<endl;
    

    return 0;
}