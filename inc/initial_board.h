#ifndef initial_board_h
#define initial_board_h

void initial_board(int board[9][9][2]){//stack//row//column//棋子 玩家
    
    for (int i = 0; i < 9; i++){
        board[2][i][0] = 1;//步兵
        board[2][i][1] = 2;//player
        board[6][i][0] = 1;//步兵
        board[6][i][1] = 1;//player
    }
    board[0][0][0] = 2;//香車
    board[0][0][1] = 2;//player
    board[0][8][0] = 2;//香車
    board[0][8][1] = 2;//player
    board[8][0][0] = 2;//香車
    board[8][0][1] = 1;//player
    board[8][8][0] = 2;//香車
    board[8][8][1] = 1;//player
    
    board[0][1][0] = 3;//桂馬
    board[0][1][1] = 2;//player
    board[0][7][0] = 3;//桂馬
    board[0][7][1] = 2;//player
    board[8][1][0] = 3;//桂馬
    board[8][1][1] = 1;//player
    board[8][7][0] = 3;//桂馬
    board[8][7][1] = 1;//player
    
    board[0][2][0] = 4;//銀將
    board[0][2][1] = 2;//player
    board[0][6][0] = 4;//銀將
    board[0][6][1] = 2;//player
    board[8][2][0] = 4;//銀將
    board[8][2][1] = 1;//player
    board[8][6][0] = 4;//銀將
    board[8][6][1] = 1;//player
    
    board[0][3][0] = 5;//金將
    board[0][3][1] = 2;//player
    board[0][5][0] = 5;//金將
    board[0][5][1] = 2;//player
    board[8][3][0] = 5;//金將
    board[8][3][1] = 1;//player
    board[8][5][0] = 5;//金將
    board[8][5][1] = 1;//player
    
    board[0][4][0] = 6;//王將
    board[0][4][1] = 2;//player
    board[8][4][0] = 6;//王將
    board[8][4][1] = 1;//player
    
    board[1][7][0] = 7;//角行
    board[1][7][1] = 2;//player
    board[7][1][0] = 7;//角行
    board[7][1][1] = 1;//player
    
    board[1][1][0] = 8;//飛車
    board[1][1][1] = 2;//player
    board[7][7][0] = 8;//飛車
    board[7][7][1] = 1;//player
}
//
#endif /* initial_board_h */
