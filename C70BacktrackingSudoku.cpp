#include<iostream>
#include<vector>
using namespace std;

    bool canWePlace(vector<vector<char>> &board, int row, int col, char num){
        // Checking if present in col
        for(int i = 0; i < 9; i++){
            if(board[i][col] == num ){
                return false;
            }
        }
        
        // Checking if present in row
        for(int j = 0; j < 9; j++){
            if(board[row][j] == num){
                return false;
            }
        }
        
        // To check in sub grid
        int r = (row/3)*3;
        int c = (col/3)*3;
        // We get startring position of every grid
        
        for(int i = r; i < (r+3); i++){
            for(int j = c; j < (c+3); j++){
                if(board[i][j] == num){
                    return false;
                }
            }
        }
        
        return true;
        
    }
    
    bool sudoku(vector<vector<char>>& board, int row, int col){
        if(col == 9) return sudoku(board,row+1,0);
        
        if(row == 9) return true;
        
        if(board[row][col] == '.'){
            for(int i = 1; i <=9; i++){
                if(canWePlace(board, row,col,'0'+i)){
                    board[row][col] = '0'+i;
                    bool res = sudoku(board,row,col+1);
                    if(res) return true; // if we are able to fill , dont need to check any further 
                    board[row][col] = '.'; // else backtrack and change the state
                }
                
            }
            return false;
        }
        
        else{
            return sudoku(board,row,col+1); // if there is already a number
        }
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        sudoku(board, 0, 0);
    }

int main(){
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    solveSudoku(board);

    for(int i = 0; i< 9; i++){
        for(int j = 0; j < 9; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}
