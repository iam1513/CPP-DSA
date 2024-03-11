//Swapping values of a and b

// METHOD 1 : Without Using temp var
#include<iostream>
using namespace std;
int main(){

    int a = 20;
    int b = 30;

    
    a = a + b;// a will be 50 and b is same that is 30
    b = a - b;// b will be 50 - 30 = 20
    a = a - b;// now b is 20 and a is 30 , so 50 - 30 = 20

    cout<<"Value of a is: "<<a<<" and Value of b is: "<<b<<endl;
    return 0;
}

/* METHOD 2 : Using temp var

 #include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 20;

    int temp = a;
    a = b;
    b = temp;

    cout<<"Value of a is: "<<a<<" and "<<"Value of b is: "<<b<<endl;

    return 0;

}

*/