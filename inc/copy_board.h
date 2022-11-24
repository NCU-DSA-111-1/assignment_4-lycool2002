//
//  copy_board.h
//  shogi
//
//  Created by 李彥岑 on 2022/11/10.
//

#ifndef copy_board_h
#define copy_board_h

void copy_board(int board_before[9][9][2], int board_after[9][9][2]){
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            for (int k = 0; k < 2; k++){
                board_after[i][j][k] = board_before[i][j][k];
                
            }
        }
    }
}


#endif /* copy_board_h */
