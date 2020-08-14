#include <iostream>
#include <random>
#include <fstream>

using namespace std;

const string ALPHABETS("abcdefghijklmnopqrstuvwxyz");
default_random_engine rand_engine;
uniform_int_distribution<size_t> dist(0, ALPHABETS.length() - 1);

string make_word(int how_long) {
    string word;
    for (int i = 0; i < how_long; ++i) {
        word += ALPHABETS[dist(rand_engine)];
    }            
    return word;
}

int main(int argc, char* argv[]) {
    string filename = "dict.txt";
    fstream file;
    file.open(filename.c_str());
    for (int i = 1; i < argc; ++i) {
        // cout << make_word(stoi(argv[i])) << " ";
        if(make_word(stoi(argv[i])) )
    }
    cout << endl;
    file.close();
    return 0;
}