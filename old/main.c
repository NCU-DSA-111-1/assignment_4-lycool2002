#include <stdio.h>
#include <stdlib.h>
#include "read_board.h"
#include "judge.h"
#include "check_zero.h"

int solve(int board[9][9], int board_all[9][9][9], int board_tmp[9][9], int filled[9][9], int row, int col);
int main(int argc, const char * argv[]) {
    
    int board_all [9][9][9] = {0};
    int board [9][9] = {0};


    // 1  :可填
    // 0  :不可填
    read_board("test_board.csv", board_all, board); 
    printf("ok\n");
    judge(board_all, board);
    printf("ok\n");
    solve(board, board_all, 0, 0);
    
    return 0;
}
//初始化board tmp = board
//filled all -1
void solve(int board[9][9], int board_all[9][9][9], int board_tmp[9][9], int row ,int col){

    if(row == 8 && col == 8) return;
    
    if(board[row][col] == 1) continue;
    col +=1;
    if(col == 9){
        col = 0;
        row += 1;
    }
    
    
}

function sudo = sudoBacktracker(sudo)
    candid = getCandid(sudo);
    if all(sudo(:))
        return
    end
    [r,c] = find(~sudo,1);
    for sol = find(candid(r,c,:))'
        sudoTmp = sudo;
        sudoTmp(r,c) = sol;
        sudoTmp = sudoBacktracker(sudoTmp);
        if all(sudoTmp(:))
            sudo = sudoTmp;
            return
        end
    end
end


