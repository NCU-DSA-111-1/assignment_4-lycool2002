void fill(int num, int position[9]){
     switch(num){
        case 0: {
            for( int i = 0; i<9; i++) position[i] = 1;
            break;
            }
        case 1: position[0] = 1; break;
        case 2: position[1] = 1; break;
        case 3: position[2] = 1; break;
        case 4: position[3] = 1; break;
        case 5: position[4] = 1; break;
        case 6: position[5] = 1; break;
        case 7: position[6] = 1; break;
        case 8: position[7] = 1; break;
        case 9: position[8] = 1; break;
        }
}

void read_board(char name[], int board_all[9][9][9], int board[9][9]){
    
    FILE *fp = fopen(name, "r");
    
    int num = 0;
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 8; j++){
            fscanf(fp, "%d,", &num);
            fill(num, board_all[i][j]);
            board[i][j] = num;
        }
        fscanf(fp, "%d\n", &num);
        fill(num, board_all[i][8]);
        board[i][8] = num;
    }
    fclose(fp);
}



