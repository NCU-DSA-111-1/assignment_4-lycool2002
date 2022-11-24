//
//  board_stack.h
//  shogi
//
//  Created by 李彥岑 on 2022/11/10.
//

#include <stdio.h>
#include <stdlib.h>
#ifndef board_stack_h
#define board_stack_h
#define MAXSTACK 100 /*定義最大堆疊容量*/

/*
int board_stack(int top, int action, int board[100][9][9][2], int board_tmp[9][9][2]){
    
    if(action == 0){ //0:pop 1:push
        if(top != 0){
            top = top - 1;
        }
    }
    else {
        if(top < (MAXSTACK - 1)){
            top = top + 1;
            copy_board(board_tmp, board[top]);
        }
    }
    return top;
}*/

struct node{
    int info[9][9][2];
    struct node *next;
};
typedef struct node NODE;

NODE* push( NODE *top, int info_array[9][9][2]){
    NODE *tmp = NULL;
    tmp = (NODE*)malloc(sizeof(NODE));
    
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            for(int k = 0; k < 2; k++){
                tmp -> info[i][j][k] = info_array[i][j][k];
            }
        }
    }
    
    if (top == NULL) {
        tmp -> next = NULL;
    } else {
        tmp -> next = top; // Make the node as top
    }
    top = tmp;
    
    return top;
    
}

NODE* pull( NODE *top){
    
    NODE *tmp = top;
    
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            for(int k = 0; k < 2; k++){
                tmp -> info[i][j][k] = top -> info[i][j][k];
            }
        }
    }
    
    top = top -> next;
    free(tmp);
    
    return top;
    

    
}



#endif /* board_stack_h */
