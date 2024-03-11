//+ ---> Concatenation

//strcat()

//push_back(): insert char at the end of the string ---> str.push_back(char)

//size: str.size(),str.length() --->for string ---> O(1)
//strlen(array name)---> for char array ---> O(n)

//to_string(): num or int values to string ---> int num = 4; to_string(num)--->'4'.


#include<iostream>
#include<cstring>
using namespace std;

int main(){

    // string s1="Ash";
    // string s2=" Ketchum.";

    // cout<<s1+s2;

    // char s1[20] ="college";
    // char s2[20] =" wallah";

    // strcat(s1,s2);//s2 will be appended in front of s1
    // cout<<s1<<endl;

    // string s1 ="abcd";
    // char ch = 'e';

    // s1.push_back(ch);

    // cout<<s1;

    string s1 = "abcde";
    cout<<s1.size()<<endl;

    char ch[20]="abcde";
    cout<<strlen(ch)<<endl;

    return 0;
}