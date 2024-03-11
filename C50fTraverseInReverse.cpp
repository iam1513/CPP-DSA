//Given the head of a singly linked list and print the reversed list.
//We can use recursion here.
#include<iostream>
using namespace std;

class Node{
    public:
        int val ;
        Node* next;

    Node(int data){
        val = data;//Dont take data = data or code wont work
        next = NULL;
    }    

};

class LinkedList{
    public:
        Node* head;

        LinkedList(){
            head = NULL;
        }

    void insertAtTail(int val){
        Node* new_node = new Node(val);
        Node* temp = head;
        if(head == NULL){
            head = new_node;
            return;
        }

        while(temp->next!=NULL){
            temp = temp->next;

        }
        temp->next = new_node;
    }

    void display(){
        //Create new node
        Node* temp = head;
        while(temp!= NULL){
            cout<<temp->val<<"->";
            temp = temp -> next;
        }cout<<"NULL"<<endl;
    }

};

void reverse(Node* head){
    if(head==NULL) {return;}

    reverse(head->next);
    cout<<head->val<<" ";

}

int main(){

    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);

    ll.display();
    reverse(ll.head);

    return 0;
}