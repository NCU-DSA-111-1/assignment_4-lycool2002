void judge(int board_all[9][9][9], int board[9][9]){
    int a = 0;
    
    
    //row
    
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            a = board[i][j];
            for(int k = 0; k < 9; k++){
                if(j != k){
                    if(a != 0) board_all[i][k][a-1] = 0;
                }
            }
        }    
    }
    
    //column
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            a = board[j][i];
            for(int k = 0; k < 9; k++){
                if(j != k){
                    if(a != 0) board_all[k][i][a-1] = 0;
                }
            }
        }    
    }
    
    //all_square
    for(int m = 0; m < 9; m+=3){
        for(int n = 0; n < 9; n+=3){
            // one schare
            for(int i = m; i < m+3; i++){
                for(int j = n; j < n+3; j++){       
                    a = board[i][j]; 
                    for(int k = m; k < m+3; k++){
                        for(int l = n; l < n+3; l++){
                            if(!(i == k && j == l)){
                                if(a != 0) board_all[k][l][a-1] = 0;
                            }        
                        }
                    } 
                       
                }
            }        
        }
    }

    
}
