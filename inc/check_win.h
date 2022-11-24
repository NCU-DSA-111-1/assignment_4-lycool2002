//
//  check_win.h
//  shogi
//
//  Created by 李彥岑 on 2022/10/29.
//

#ifndef check_win_h
#define check_win_h

int check_win(int board[9][9][2]){
    int win = 0;
    int win1 = 0;
    int win2 = 0;
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            if(board[i][j][0] == 6 && board[i][j][1] == 1)
                win1 = 1;
            
            else if(board[i][j][0] == 6 && board[i][j][1] == 2)
                win2 = 1;
        }
    }
    if(win1 == 1 && win2 == 0){
        printf("player x win ");
        win = 1;
    }
    else if (win1 == 0 && win2 == 1){
        printf("player y win ");
        win = 1;
    }
    return win;
}

#endif /* check_win_h */
