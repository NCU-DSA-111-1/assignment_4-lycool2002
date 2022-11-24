//
//  clear_board.h
//  shogi
//
//  Created by 李彥岑 on 2022/11/10.
//

#ifndef clear_board_h
#define clear_board_h

void clear_board(int board[9][9][2]){
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            for (int k = 0; k < 2; k++){
                board[i][j][k] = 0;
                
            }
        }
    }
}
#endif /* clear_board_h */
