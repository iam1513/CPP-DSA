// i. Infix  (x+y)
// ii. Post fix  (i++)
// iii. Pre fix  (++i)

/*Evaluation of Postfix expressions
2 3 1 * + 9 -
2(3*1)+9- ==> (2+3)9- ==> 5 9 - ==> 5 - 9 ==> -4
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
    for(int i = 0;i < str.size(); i++){
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

    string str = "231*+9-";
    cout<<evaluate(str)<<endl;

    return 0;
}