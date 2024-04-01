#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int row ,int col , vector<vector<int>>& board,int value){
    for(int i = 0; i < board.size(); i++){
        if(board[row][col]==value){
            return false;
        }

        if(board[i][col] == value){
            return false;
        }
        
        if(board [3*(row/3) + i / 3][3*(col/3) + i %3 ] == value)
             return false;
    }
    return true;
}

bool solve(vector<vector<int>>& board){
    int n = board[0].size();

    for(int row = 0 ; row < n; row++){
        for(int col = 0; col < n; col++){
            if(board[row][col] == 0){
                for(int val = 0 ; val <= 9 ; val++){
                    if(isSafe(row,col,board,val)){
                         board[row][col] = val;

                         bool aageSolutionPossible = solve(board);
                         if(aageSolutionPossible){
                            return true;
                         }
                         else{
                            board[row][col] = 0;
                         }
                    }
                }
                return false;
            }
        }
    }
}

void solveSudoku(vector<vector<int>>& suduko){
    solve(suduko);
}

int main(){
    return 0;
}
