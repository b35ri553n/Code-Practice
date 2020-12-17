#include <iostream>
#include <vector>
#define COL 5
#define ROW 5
using namespace std;

bool isSafe(int M[][COL], int row, int col, int visited[][COL]) {
    return (row >= 0 && row < ROW && col >= 0 && col < COL && M[row][col] && !visited[row][col]);
}

void DFS(int M[][COL], int row, int col, int visited[][COL]) {
    visited[row][col] = true;
    int rowNo[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int colNo[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    for(int k = 0; k < 8; k++) {
        if(isSafe(M, row + rowNo[k], col + colNo[k], visited))
            DFS(M, row + rowNo[k], col + colNo[k], visited);
    }
}

int countIslands(int M[][COL]) {
    int visited[ROW][COL];
    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COL; j++) {
            visited[i][j] = false;
        }
    }
    int count = 0;
    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COL; j++) {
            if(!visited[i][j] && M[i][j]) {
                DFS(M, i, j, visited);
                count++;
            }
        }
    }
    return count;
}

int main() 
{ 
    int M[][COL] = { { 1, 1, 0, 0, 0 }, 
                     { 0, 1, 0, 0, 1 }, 
                     { 1, 0, 0, 1, 1 }, 
                     { 0, 0, 0, 0, 0 }, 
                     { 1, 0, 1, 0, 1 } }; 
  
    cout << "Number of islands is: " << countIslands(M); 
    return 0; 
} 