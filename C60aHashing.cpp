/*
        WHY HASHING?
        --> Finding an unique index for all elements to store them : HASHING

        WHAT IS HASHING?
        --> Hashvalues - unique indices
        --> Hash function - to get hashvalues
        --> Hash table

        WHAT ARE HASH FUNCTIONS?
        1.Division Method
        2.Mid Square Method
        3.Digit folding method : Fold key into equal size parts
        4.Multiplication method 

        COLLISIONS:
        --> when two elements have same hashvalues

        1.Open Hashing(Closed Addressing)  --> Separate Chaining --> Using Linked List
        2.Closed Hashing(Open Addressing)  --> 
            1. Linear Probing : If hashvalues are same, we will find next empty index, and keep repeating (h(k) + i)
                                               This process of checking empty is ==> Probs
            2. Quadratic Probing : (h(k) + square of i) --> To avoid clusters
            3. Double Hashing : Two hash functions 

        LOAD FACTOR : (n/m) where,  n-->no. of elements   m-->no. of buckets ===> Average entries in one bucket
        Load factor limit : 0.75, size is more than that, we will do rehashing

        REHASHING : Increase size of hashtable and redistributing elements in it by assigning new hashvalues.
*/

//Implement hash table with Closed addressing

#include<iostream>
#include<list>
#include<algorithm>
#include<vector>
using namespace std;

class Hashing{
    
    vector<list<int>> hashtable;//Its a vector in which each index will have a linked list
    int buckets;

public:

    Hashing(int size){
        buckets = size;
        hashtable.resize(size);
    }

    int hashvalue(int key){//Division method
        return key%buckets;
    }

    void addkey(int key){
        int idx = hashvalue(key);
        hashtable[idx].push_back(key);
    }

    list<int>::iterator searchkey(int  key){//Index of the value to stored
        int idx = hashvalue(key);
        return find(hashtable[idx].begin(),hashtable[idx].end(),key);
    }

    void deletekey(int key){//To delete
        
        int idx = hashvalue(key);
        if(searchkey(key)!=hashtable[idx].end()){//Key is present
            hashtable[idx].erase(searchkey(key));
            cout<<key<<" is deleted.\n";
        }
        else{
            cout<<"Key is not present in the hashtable.\n";
        }
    }
};

int main(){

    Hashing h(10);

    h.addkey(3);
    h.addkey(7);
    h.addkey(2);

    h.deletekey(2);
    h.deletekey(2);


    return 0;
}