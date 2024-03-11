//NumberSystem-->represent a no using diff forms using diff base vaues

// In Decimal no system base value is 10 
//In decimal no system we can use digits from 0-9 and powers of 10
//ex: 520=5*10^2 + 2*10^1 +o*10^0

//Binary no system : o,1 and powers of 2 . We can also say that its base value is 2.
//1010(use 2 in subscript to show its binary) =1*2^3 + 0*2^2 + 1*2^1 + 0*2^0

//Hexadecimal no system: Base value =16, 0-15 and powers of 16

/*Conversion of Binary to Decimal
1011(2)=1*2^3 + 0*2^2 + 1*2^1 + 1*2^0
       =8 + 0 + 2 +1
       =11(10)[10 in subscript means decimal] 

101(2) =1*2^2 + 0*2^1 + 1*2^0
       = 4 + 0 + 1
       =5(10)   
*/
 
// ConversionOfBinaryToDecimal 
#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int ans=0;
   int power=1;
   while(n>0){
       int lastdigit = n % 10;
       ans+= lastdigit*power;
       power*=2;
       n/=10;
   }

      cout<<ans<<endl;
   
   return 0;
}