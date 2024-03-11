//Write a program to check whether a given number is palindrome or not.
#include<iostream>
using namespace std;

bool f(int num, int *temp){
    //Base case
    if(num >= 0 and num <= 9){
        int lastDigitOfTemp = (*temp)%10;
        (*temp) /= 10;
        return (num == lastDigitOfTemp);
    }
    bool result =  (f(num/10,temp) and (num%10) == ((*temp)%10));
    (*temp) /= 10;
    return result;
}

int main(){
    int num = 12321;
    int num2 = num;
    int *temp = &num2; 
    cout<<f(num, temp);
    return 0;
}