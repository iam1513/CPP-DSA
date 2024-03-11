//Anagram is formed when we rearrage letters of word to get a new word

#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

bool isAnagram(string s1, string s2){
    //Create freq array
    vector<int> freq(26,0);

    //If len are diff for s1 and s2, return false
    if(s1.length() != s2.length()){
        return false;
    }

    //Stored freq of characters in s1 and s2
    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++;//For s1, we are incrementing
        freq[s2[i]-'a']--;//For s2, we are decrementing
    }

    //Checking if freq of every char is 0
    for(int i=0;i<26;i++){
        if(freq[i] != 0){
            //not anagram
            return false;
        }
    }

    return true;


}

int main(){

    string s1;
    cout<<"Enter string 1: ";
    cin>>s1;

    string s2;
    cout<<"Enter string 2: ";
    cin>>s2;

    if(isAnagram(s1,s2)){
        cout<<"Strings are Anagram.";
    }
    else{
        cout<<"Strings are not Anagram.";
    }

    return 0;
}

//TC : O(length of the string)
//SC : O(26) ===>Constant



// Suppose we have the following two input strings:

// s1: "listen"
// s2: "silent"

// Create the frequency array freq of size 26 and initialize all elements to 0:

// makefile
// Copy code
// freq: [0, 0, 0, ..., 0]
// Check if the lengths of the two strings are the same. Both "listen" and "silent" have a length of 6, so the condition is satisfied.

// Now, the loop iterates through each character of the strings "listen" and "silent". Let's go through the iterations:

// Iteration 1: i = 0

// s1[0] is 'l', and s1[0] - 'a' gives the index corresponding to 'l' in the freq array, which is 11 (since 'l' is the 12th letter in the English alphabet).
// Increment freq[11] (frequency of 'l') by 1. Now freq[11] = 1.
// s2[0] is 's', and s2[0] - 'a' gives the index corresponding to 's' in the freq array, which is 18 (since 's' is the 19th letter in the English alphabet).
// Decrement freq[18] (frequency of 's') by 1. Now freq[18] = -1.
// Iteration 2: i = 1

// s1[1] is 'i', and s1[1] - 'a' gives the index corresponding to 'i' in the freq array, which is 8 (since 'i' is the 9th letter in the English alphabet).
// Increment freq[8] (frequency of 'i') by 1. Now freq[8] = 1.
// s2[1] is 'i', and s2[1] - 'a' gives the index corresponding to 'i' in the freq array, which is 8.
// Decrement freq[8] (frequency of 'i') by 1. Now freq[8] = 0.
// Iteration 3: i = 2

// s1[2] is 's', and s1[2] - 'a' gives the index corresponding to 's' in the freq array, which is 18.
// Increment freq[18] (frequency of 's') by 1. Now freq[18] = 0.
// s2[2] is 'l', and s2[2] - 'a' gives the index corresponding to 'l' in the freq array, which is 11.
// Decrement freq[11] (frequency of 'l') by 1. Now freq[11] = 0.
// Iteration 4: i = 3

// s1[3] is 't', and s1[3] - 'a' gives the index corresponding to 't' in the freq array, which is 19.
// Increment freq[19] (frequency of 't') by 1. Now freq[19] = 1.
// s2[3] is 'e', and s2[3] - 'a' gives the index corresponding to 'e' in the freq array, which is 4 (since 'e' is the 5th letter in the English alphabet).
// Decrement freq[4] (frequency of 'e') by 1. Now freq[4] = -1.
// Iteration 5: i = 4

// s1[4] is 'e', and s1[4] - 'a' gives the index corresponding to 'e' in the freq array, which is 4.
// Increment freq[4] (frequency of 'e') by 1. Now freq[4] = 0.
// s2[4] is 'n', and s2[4] - 'a' gives the index corresponding to 'n' in the freq array, which is 13 (since 'n' is the 14th letter in the English alphabet).
// Decrement freq[13] (frequency of 'n') by 1. Now freq[13] = -1.
// Iteration 6: i = 5

// s1[5] is 'n', and s1[5] - 'a' gives the index corresponding to 'n' in the freq array, which is 13.
// Increment freq[13] (frequency of 'n') by 1. Now freq[13] = 0.
// s2[5] is 't', and s2[5] - 'a' gives the index corresponding to 't' in the freq array, which is 19.
// Decrement freq[19] (frequency of 't') by 1. Now freq[19] = 0.
// After completing the loop, the freq array becomes:

// makefile
// Copy code
// freq: [0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
// Finally, the function checks if all elements in the freq array are zero. Since all elements are zero, it returns true, indicating that the two input strings "listen" and "silent" are anagrams of each other.

// Therefore, the program will print "Strings are Anagram." for this example

// Suppose we have the following two input strings:

// s1: "listen"
// s2: "silent"

// After the first for loop, the frequency array freq becomes:

// makefile
// Copy code
// freq: [0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
// The second for loop checks if there are any non-zero elements in the freq array. If there are any non-zero elements, it means that there are some characters in s1 and s2 that have different frequencies, indicating that the strings are not anagrams.

// The loop iterates through the freq array to check each element:

// Iteration 1: i = 0

// freq[0] is zero, which means the frequency of 'a' is zero. Move to the next element.
// Iteration 2: i = 1

// freq[1] is zero, which means the frequency of 'b' is zero. Move to the next element.
// Iteration 3: i = 2

// freq[2] is zero, which means the frequency of 'c' is zero. Move to the next element.
// Iteration 4: i = 3

// freq[3] is zero, which means the frequency of 'd' is zero. Move to the next element.
// Iteration 5: i = 4

// freq[4] is zero, which means the frequency of 'e' is zero. Move to the next element.
// Iteration 6: i = 5

// freq[5] is zero, which means the frequency of 'f' is zero. Move to the next element.
// Iteration 7: i = 6

// freq[6] is zero, which means the frequency of 'g' is zero. Move to the next element.
// Iteration 8: i = 7

// freq[7] is zero, which means the frequency of 'h' is zero. Move to the next element.
// Iteration 9: i = 8

// freq[8] is one, which means the frequency of 'i' is one. Since the frequency is not zero, the loop returns false, indicating that the two input strings "listen" and "silent" are not anagrams.
// The program will print "Strings are not Anagram." for this example.

// In summary, the second for loop is responsible for checking if there are any non-zero elements in the frequency array freq. If there are any non-zero elements, it means that the frequencies of characters in s1 and s2 are different, and the strings are not anagrams. If all elements in the freq array are zero, it indicates that the strings are anagrams.