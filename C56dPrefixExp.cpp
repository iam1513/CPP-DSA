/*Evaluation of Prefix expressions
- 9 + * 5 3 1
- 9 + (5*3) 1 ==> -9 (15+1) ==> 9 - 16 ==> -7
*/
#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int calc(int v1,int v2, char op){
    if(op == '^'){
        return pow(v1,v2);
    }
    if(op == '*'){
        return v1*v2;
    }
    if(op == '/'){
        return v1/v2;
    }
    if(op == '+'){
        return v1+v2;
    }
    if(op == '-'){
        return v1-v2;
    }
}

int evaluate(string &str){
    stack<int> st;
    for(int i = str.size()-1;i>=0 ; i--){//Only here change wrt last code
        char ch = str[i];
        if(isdigit(ch)){
            st.push(ch -'0');
        }
        else{
            int v2 = st.top();
            st.pop();
            int v1 = st.top();
            st.pop();
            st.push(calc(v1,v2,ch));
        }
    }
    return st.top();
}

int main(){

    string str = "-9+*132";
    cout<<evaluate(str)<<endl;

    return 0;
}