//Given the head of a LL, rotate the list to the right by k places

#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
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

        if(head==NULL){
            head = new_node;
            return;
        }

        Node* temp = head;

        while(temp->next){
            temp =temp -> next;
        }
        
        temp -> next = new_node;
    }

        void display(){

            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->val<<"->";
                temp = temp->next;
            }cout<<"NULL"<<endl;
        }
    
};

Node* rotateByK(Node* &head, int k){
    //1. Find length of ll
    int n = 0;
    //2. Find tail node
    Node* tail = head;
    
    while(tail->next){
        n++;
        tail = tail->next;
    }
    n++;//For including last node
    
    k=k%n;
    if(k==0){
        return head;
    }

    tail -> next = head;

    //3. Traverse n-k nodes
    Node* temp = head;
    for(int i=1;i<n-k;i++){
        temp = temp->next;
    }
    
    //4. Temp is pointing to (n-k)th node
    Node* newhead = temp->next;
    temp->next = NULL;
    return newhead;
}

int main(){

    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    
    ll.display();

    ll.head = rotateByK(ll.head,3);
    ll.display();

    return 0;
}
