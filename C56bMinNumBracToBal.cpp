#include<iostream>
#include<stack>
using namespace std;

int minBrackReqToBal(string str){
    stack<char> st;
    int count = 0;
    for(int i = 0; i < str.size();i++){
        char ch = str[i];
        if(ch=='[' || ch == '{' || ch == '('){
            st.push(ch);
        }else{
            //Closing brackets
            if(ch==')' && !st.empty() && st.top() == '('){
                st.pop();
            }
            else if(ch=='}' && !st.empty() && st.top() == '{'){
                st.pop();
            }
            else if(ch==']' && !st.empty() && st.top() == '['){
                st.pop();
            }
            else{
                count++;
            }

        }
    }
    return count;
}

int main(){
    
    string str = "({[]}}}[])))]";
    cout<<minBrackReqToBal(str)<<endl;
   
    return 0;
}