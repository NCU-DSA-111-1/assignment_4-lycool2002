#ifndef output_h
#define output_h
void output(int board[9][9][2]){
    printf("   ");
    for (int i = 0; i < 9; i++){
        printf("%d  ",i+1);
        
    }
    printf("\n");
    for (int i = 0; i < 9; i++){
        printf("%d ",i+1);
        for (int j = 0; j < 9; j++){
            outputtext(board[i][j][0], board[i][j][1]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\033[01m1:步兵 2:香車 3:桂馬 4:銀將 5:金將 6:王將 7:角行 8:飛車\n\033[0m");
}


#endif /* output_h */
