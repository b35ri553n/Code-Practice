#include <bits/stdc++.h>
using namespace std;

struct TrieNode {
    TrieNode *child[26];
    bool isEnd;
    TrieNode() {
        isEnd = false;
        for(int i = 0; i < 26; i++) 
            child[i] = NULL;
    } 
};

bool searchWord(string word, TrieNode *root) {
    TrieNode *curr = root;
    for(int i = 0; i < word.length(); i++) {
        int index = word[i] - 'a';      //assuming word contains only lowercase alphabet
        if(!(curr -> child[index])) return false;
        curr = curr -> child[index];
    }
    return curr -> isEnd;
}

void insertWord(string word, TrieNode *&root) {
    TrieNode *curr = root;
    for(int i = 0; i < word.length(); i++) {
        int index = word[i] - 'a';      //assuming word contains only lowercase alphabet
        if(!(curr -> child[index])) 
            curr -> child[index] = new TrieNode();
        curr = curr -> child[index];
    }
    curr -> isEnd = true;
}

int main() {
    TrieNode *root = new TrieNode();
    insertWord("book", root);
    insertWord("baton", root);
    insertWord("cat", root);
    string word;
    cout << "Enter word to be searched: " << endl;
    cin >> word;
    if(searchWord(word, root)) cout << "Found!";
    else cout << "Not found.";
    return 0;
}