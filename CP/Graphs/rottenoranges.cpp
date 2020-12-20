#include <iostream>
#include <queue>
#define r 3
#define c 5
using namespace std;

struct Node {
    int seconds;
    int x;
    int y;
    Node(int seconds, int x, int y) {
        this -> seconds = seconds;
        this -> x = x;
        this -> y = y;
    }
};

void addOranges(int basket[][c], int time_frame, queue<Node *> q) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(basket[i][j] == 2) {
                Node *temp = new Node(time_frame, i, j);
                q.push(temp);
            }
        }
    }
}

int getRotTime(int basket[][c]) {
    queue<Node *> q;
    int time_frame = 1;
    int rowAd[] = {-1, 0, 0, 1};
    int colNo[] = {0, -1, 1, 0};
    addOranges(basket, time_frame, q);
    while(!q.empty()) {
        auto rotten = q.front();
        q.pop();
        for(int k = 0; k < 4; k++) {
            if(!visited[])
        }
    }
}

int main() {
    int basket[r][c];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) 
            cin >> basket[i][j];
    }
    cout << getRotTime(basket);
    return 0;
}