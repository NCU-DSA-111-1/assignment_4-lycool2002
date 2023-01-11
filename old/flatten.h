void board_flatten(int board[9][9], int fboard[81]){
     for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            fboard[9*i+j] = board[i][j];
        }  
    }
}

void board_all_flatten(int board[9][9][9], int fboard[81][9]){
     for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            for(int k = 0; k < 9; k++){
                fboard[9*i+j][k] = board[i][j][k];
            }
        }  
    }
}