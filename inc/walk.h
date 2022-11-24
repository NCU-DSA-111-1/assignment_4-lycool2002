//
//  walk.h
//  shogi
//
//  Created by 李彥岑 on 2022/11/10.
//

#ifndef walk_h
#define walk_h

int solider(int solider, int mode, int player, int position[2], int go[2], int board[9][9][2]){ //步兵
    //printf("solider: %d\n",solider);
    if(mode == 0){
        int judge = 1;
        if (solider == 1){//步兵
            if(go[0] - position[0] != 1 || go[1] - position[1] != 0
               || board[go[0]-1][go[1]-1][1] == player){
                judge = 0;
            }
        }
        else if (solider == 2){//香車
            if(go[1] - position[1] == 0 && board[go[0]-1][go[1]-1][1] != player){
                if(go[0] > position[0]){
                    for(int i = 0; i < (go[0] - position[0]); i++){
                        if(board[position[0] + i][position[1]-1][0] != 0)judge = 0;
                    }
                }
                else judge = 0;
            }
            else judge = 0;
        }
        else if (solider == 3){//桂馬
            if(board[go[0]-1][go[1]-1][1] != player){
                if(go[0]-position[0] != 2){
                    judge = 0;
                }
                else{
                    if(go[1]-position[1] != 1 && go[1]-position[1] != -1){
                        judge = 0;
                    }
                }
            }
            else judge = 0;
        }
        else if (solider == 4){//銀將
            if(board[go[0]-1][go[1]-1][1] != player){
                if(go[0]-position[0] != 1 && go[0]-position[0] != -1){
                    judge = 0;
                }
                else{
                    if(go[0]-position[0] == 1){
                        if(go[1]-position[1]!= -1 && go[1]-position[1]!= 0
                           && go[1]-position[1]!= 1){
                            judge = 0;
                        }
                    }
                    else if(go[0]-position[0] == -1){
                        if(go[1]-position[1]!= -1 && go[1]-position[1]!= 1){
                            judge = 0;
                        }
                    }
                    else judge = 0;
                }
            }
            else judge = 0;
        }
        else if (solider == 5){//金將
            if(board[go[0]-1][go[1]-1][1] != player){
                if(go[0]-position[0] != 1 && go[0]-position[0] != -1
                   && go[0]-position[0] != 0){
                    judge = 0;
                }
                else{
                    if(go[0]-position[0] == 1){
                        if(go[1]-position[1]!= -1 && go[1]-position[1]!= 0
                           && go[1]-position[1]!= 1){
                            judge = 0;
                        }
                    }
                    else if(go[0]-position[0] == -1){
                        if(go[1] != position[1]){
                            judge = 0;
                        }
                    }
                    else if(go[0]-position[0] == 0){
                        if(go[1] != position[1]){
                            if(go[1]-position[1]!= -1 && go[1]-position[1]!= 1){
                                judge = 0;
                            }
                        }
                    }
                    else judge = 0;
                }
            }
            else judge = 0;
        }
        else if (solider == 6){//王將
            if(board[go[0]-1][go[1]-1][1] != player){
                if(go[0]-position[0] != 1 && go[0]-position[0] != -1
                   && go[0]-position[0] != 0){
                    judge = 0;
                }
                else{
                    if(go[0]-position[0] == 1 || go[0]-position[0] == -1){
                        if(go[1]-position[1]!= -1 && go[1]-position[1]!= 0
                           && go[1]-position[1]!= 1){
                            judge = 0;
                        }
                    }
                    else if(go[0]-position[0] == 0){
                        if(go[1] != position[1]){
                            if(go[1]-position[1]!= -1 && go[1]-position[1]!= 1){
                                judge = 0;
                            }
                        }
                    }
                    else judge = 0;
                }
            }
            else judge = 0;
        }
        else if (solider == 7){//角行
            if(board[go[0]-1][go[1]-1][1] != player){
                if(go[1] - position[1] == go[0] - position[0]
                   || go[1] - position[1] == -(go[0] - position[0])){
                    if(go[0] > position[0]){
                        for(int i = 0; i > (go[0] - position[0]-1); i++){
                            if(go[1] > position[1]
                               ||board[position[0] + i][position[1] + i][0] != 0)judge = 0;
                            else if(go[1] < position[1]
                               ||board[position[0] + i][position[1] -2 - i][0] != 0)judge = 0;
                        }
                    }
                    else if(go[0] < position[0]){
                        for(int i = 0; i > (position[0] - go[0]-1); i++){
                            if(go[1] > position[1]
                               ||board[position[0] -2  - i][position[1] + i][0] != 0)judge = 0;
                            else if(go[1] < position[1]
                               ||board[position[0] -2 - i][position[1] -2 - i][0] != 0)judge = 0;
                        }
                    }
                }
                else judge = 0;
            }
            else judge = 0;
        }
        else if (solider == 8){//飛車
            if(go[1] - position[1] == 0 && board[go[0]-1][go[1]-1][1] != player){
                if(go[0] > position[0]){
                    for(int i = 0; i < (go[0] - position[0]-1); i++){
                        if(board[position[0] + i][position[1] -1 ][0] != 0)judge = 0;
                    }
                }
                else if(go[0] < position[0]){
                    for(int i = 0; i > (go[0] - position[0]-1); i--){
                        if(board[position[0] - 2 + i][position[1] - 1][0] != 0)judge = 0;
                    }
                }
                else judge = 0;
            }
            else if(go[0] - position[0] == 0 && board[go[0]-1][go[1]-1][1] != player){
                if(go[1] > position[1]){
                    for(int i = 0; i < (go[1] - position[1]-1); i++){
                        if(board[position[0] - 1][position[1]+ i][0] != 0)judge = 0;
                    }
                }
                else if(go[1] < position[1]){
                    for(int i = 0; i > (go[1] - position[1]-1); i--){
                        if(board[position[0] - 1][position[1]-2 + i][0] != 0)judge = 0;
                    }
                }
                else judge = 0;
            }
            else judge = 0;
        }
        else judge = 0;
        
        if(judge == 1) return 1;
        else return 0;
        
    }
    else{
        board[go[0]-1][go[1]-1][0] = board[position[0]-1][position[1]-1][0];
        board[go[0]-1][go[1]-1][1] = player;
        board[position[0]-1][position[1]-1][0] = 0;
        board[position[0]-1][position[1]-1][1] = 0;
        return 1;
    }
}

#endif /* walk_h */
