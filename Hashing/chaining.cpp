#include <iostream>
#include <list>

using namespace std;

class MyHash {
    private:
        int BUCKET;
        list <int> *table;
    public:
        MyHash(int b) {
            BUCKET = b;
            table = new list <int>[BUCKET];
        }
        void insert(int key) {
            int i = hash(key);
            table[i].push_back(key);
        }
        void removee(int key) {
            int i = hash(key);
            table[i].remove(key);
        }
        bool search(int key) {
            int i = hash(key);
            for(auto x: table[i]) {
                if(x == key)
                    return true;
            }
            return false;
        }
        int hash(int key) {
            return key % BUCKET;
        }
};