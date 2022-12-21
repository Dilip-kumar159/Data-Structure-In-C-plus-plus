#include<iostream>

using namespace std;

class TrieNode{
    public:

    char data;
    TrieNode* children[26];
    bool isTerminal;

    // Constructor
    TrieNode(char ch){
        data = ch;
        for(int i=0; i<26; i++){
            children[i] = nullptr;
        }
        isTerminal = false;
    }

};


class Trie{

    public: 
        TrieNode* root;

    // constructor
    Trie(){
        root = new TrieNode('\0');
    }

    // insert Util function
    void insertUtil(TrieNode* root, string word){

        // Base case
        if(word.length() == 0) {
             root->isTerminal = true;
            return;
        }

        // Asumption all the letters are in small letter
        int index = word[0] - 'a';

        TrieNode* child;

        // if there is a node then go forward
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            // there is no letter so add it
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursion
            insertUtil(child, word.substr(1));
    }

    // Insert driver function
    void insertWord(string word){
        insertUtil(root, word);
    }

    // search util function
    bool searchUtil(TrieNode* root, string word){

        // Base case
        if(word.length() == 0){
            return root->isTerminal;
        }

        int index = word[0] - 'a';
        TrieNode* child;

        // if the word present keep going forward
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            return false;
        }

        // Recursion
        return searchUtil(child, word.substr(1));

    }

    // search driver function
    bool searchWord(string word){
        return searchUtil(root, word);
    }

};


int main(){

    Trie *t = new Trie();
    t->insertWord("arm");
    t->insertWord("do");
    t->insertWord("timer");

    cout<<"present or Not -> "<<t->searchWord("time");
    
    return 0;
}