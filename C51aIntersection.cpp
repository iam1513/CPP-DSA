//Given heads of two linked lists A and B. Return the node at which both lists intersect.

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

Node* moveHeadByK(Node* head, int k){
    Node* ptr = head;
    while(k--){
        ptr = ptr->next;
    }
    return ptr;
}

//Function to calculate length 
int getLength(Node* head){
    Node* temp = head;
    int length = 0;

    while(temp!=NULL){
        length++;
        temp=temp->next;
    }

    return length;
}

Node* getIntersection(Node* head1, Node* head2){
    Node* ptr1 = head1;
    Node* ptr2 = head2;

    //Step 1:Get length
    int l1 = getLength(head1);
    int l2 = getLength(head2);

    //Step 2: Find diff between l1 and l2 , and move ptr which with more length
    if(l1>l2){
        int k = l1 -l2;
        ptr1 = moveHeadByK(head1,k);
        ptr2 = head2;
    }
    else{
        int k = l2 - l1;
        ptr1 = head1;
        ptr2 = moveHeadByK(head2,k);
    }

    //Step 3: Compare ptr1 and ptr2 nodes

    while(ptr1){
        if(ptr1==ptr2){
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return NULL;
}

int main(){
    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll1.display();

    LinkedList ll2;
    ll2.insertAtTail(6);
    ll2.insertAtTail(7);
    ll2.head->next->next = ll1.head->next->next->next;
    ll2.display();

    Node* intersection = getIntersection(ll1.head,ll2.head);

    if(intersection){
        cout<<intersection->val<<endl;
    }
    
    else{
        cout<<"-1"<<endl;
    }

    return 0; 
}