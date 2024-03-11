#include<iostream>
using namespace std;

class stack{
//Using a pointer (*arr) gives you more control over the underlying memory allocation and manipulation.
    int *arr;//Maintain an array
    int capacity;//Capacity of elements in a stack 
    int top;//Top element of array, as in stack we can access only top element


    public:
    stack(int c){
        this->capacity = c;
//new keyword to dynamically allocate memory on the heap to store an array of integers. 
//The value of c specifies how many integers you want to allocate space for.
        arr = new int(c);
        this->top = -1;
    }

    void push(int data){
        if(this->top == this->capacity-1){
//When capacity is full we cant put more elements in stack ,so it will be condition of overflow.
            cout<<"Overflow\n";
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }

    int pop(){
        if(this->top==-1){
//When our stack is empty we cant remove any elements ,so it will be condition of underflow.
            cout<<"underflow\n";
            return INT32_MIN;
        }
        this->top--;
    }

    int getTop(){
        if(this->top==-1){
            cout<<"underflow\n";
            return INT32_MIN;
        }
        return this->arr[this->top];
    }

    bool isEmpty(){
//Dont forget == while returning in bool function
        return this->top == -1;
    }

    bool isFull(){
        return this->top == this->capacity -1;
    }

    int size(){
        return this->top+1;
    }

    void display(){//Dont use this or when you will print values at start, then top will reach -1 and stack will be empty
        for(int i =0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){

    stack s1(5);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    cout<<s1.getTop()<<endl;
    s1.push(4);
    s1.push(5);
    s1.display();

    return 0;
}