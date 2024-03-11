#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> qu;
    qu.push(10);//Enqueue
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.pop();//Dequeue

    while(not qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }

    return 0;
}