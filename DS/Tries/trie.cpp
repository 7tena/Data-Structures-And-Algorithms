/*
https://www.geeksforgeeks.org/trie-insert-and-search/
https://www.geeksforgeeks.org/trie-memory-optimization-using-hash-map/
*/
#include<bits/stdc++.h>
using namespace std;
const int size = 26;
//array-definition
struct TrieNode{
    struct TrieNode *children[size];
    bool isEndOfWord;
};
//map-definition
struct Trie{
    map<char, Trie*> map;
    bool isEndOfWord;
};
//array-getNode
TrieNode* getNode(){
    TrieNode* p = new TrieNode;
    p->isEndOfWord = false;
    for(int i=0; i<size; i++){
        p->children[i] = NULL;
    }
    return p;
}
//map-getNewNode
Trie* getNewNode(){
    Trie* p = new Trie;
    p->isEndOfWord = false;
    return p; 
}
//array-insert
void insert(TrieNode* root, const string key){
    TrieNode* temp = root;
    for(int i=0 ; i<key.length(); i++){
        int index = key[i] - 'a';
        if(!temp->children[index])
            temp->children[index] = getNode();
        temp = temp->children[index];
    }
    temp->isEndOfWord = true;
}
//map-insert
void insert(Trie* &root, const string& key){
    if(!root)
        root = getNewNode();
    Trie* temp = root;
    for(int i=0; i<key.length(); i++){
        char x = key[i];
        if(temp->map.find(x) == temp->map.end()){
            temp->map[x] = getNewNode();
        }
        temp = temp->map[x];
    }
    temp->isEndOfWord = true;
}
//array-search
bool search(TrieNode* root, string key){
    if(!root)
        return false;
    TrieNode* temp = root;
    for(int i=0 ; i<key.length(); i++){
        int index = key[i] - 'a';
        if(!temp->children[index])
            return false;
        temp = temp->children[index];
    }
    return temp->isEndOfWord;
}
//map-search
bool search(Trie* root, string key){
    if(!root)
        return false;
    Trie* temp = root;
    for(int i=0; i<key.length(); i++){
        char x = key[i];
        /*
        if(temp->map.find(str[i]) == temp->map.end())
        	return false;
        */
        temp = temp->map[x];
        if(!temp)
            return false;

    }
    return temp->isEndOfWord;
}