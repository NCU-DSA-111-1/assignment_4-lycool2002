#ifndef reverse_board_h
#define reverse_board_h

void reverse_board(int board[9][9][2]){
    int tmp [9][9][2] = {0};
    copy_board(board, tmp);
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            for (int k = 0; k < 2; k++){
                board[i][j][k] = tmp[8-i][8-j][k];
                
            }
        }
    }
}
#endif /* reverse_board_h */
