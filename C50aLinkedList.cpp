/*
    @ WHAT IS LINKED LIST?
    - linear data struc used to store a list of values
    - is a single memory block with partitions []-[]-[]-[] ---> like this

    @ CHALLENGES OF ARRAY
    - static size (size cant be changed once def)
    - contiguous memory allocation
    - inserting and deleting is costly (O(n))

    @ ADV OF LINKED LIST OVER AN ARRAY
    - dynamic size
    - non - contiguous memory allocation
    - insertion and deletion is non expensive

    @ LISTNODE
    - not a built in data type, we will define it using OOP
    - blocks of memory
    - have 2 parts ---> data and next ptr(pointing to next node in linked list)
    - address 100                                address 200        address 300
      [v(data)  |  200(address of next ptr)]------[v | 300]----------[v | NULL]
       HEAD(starting node)                                            TAIL(end node)

    - if next ptr have null, that means thats the end of the LinkedList

    @ TYPES OF LINKEDLIST
    > singly linked list ---> every node pt to its successor node  []-->[]-->[]  can only go in forward direction
    > doubly linked list ---> every node pt to its previous and successor node   []<-->[]<-->[]  can go to both sides
    > circular linked list ---> same as singly only diff is last node is connected to ead node, like to complete the circle

*/

//IMPLEMENTATION OF A LISTNODE IN A SINGLY LINKED LIST

#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;//Pointer to the next node

    Node(int data){//Constructor use to initialise value and should have same name as class name
        val = data;
        next = NULL;
    }
};

int main(){

    Node* n = new Node(1);
    cout<<n->val<<" "<<n->next<<endl;   

    return 0;
}