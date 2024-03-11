//Funtions 
//Logical set of code which performs a specific task
//Input--->Parameters
//Ex: int main(){} --->Main is function here
/*
  Why are functions important:-
  >Reusability
  >DRY principle(Dont Repeat Yourself)
  >Easy to read

  Types of Functions:-
  >User-defined funtions
  >Standard Library Functions
*/
#include<iostream>
using namespace std;

int add(int num1, int num2){
    int sum=num1+num2;
    return sum;
}

int add(int num1, int num2, int num3){
  int sum=num1+num2+num3;
  return sum;
}

float add(float num1 , float num2){
  float sum=num1+num2;
  return sum;
}

int main()
{
    int a=5;
    int b=4;

    float c=3.4;
    float d=4.4;

    cout<<add(c,d)<<endl;
    
    return 0;
}