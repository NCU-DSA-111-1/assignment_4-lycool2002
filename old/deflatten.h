void board_deflatten(int board[9][9], int fboard[81]){
     for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            board[i][j] = fboard[9*i+j]; 
        }  
    }
}

void board_all_deflatten(int board[9][9][9], int fboard[81][9]){
     for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            for(int k = 0; k < 9; k++){
                board[i][j][k] = fboard[9*i+j][k];
            }
        }  
    }
}