

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "initial_board.h"
#include "clear_board.h"
#include "copy_board.h"
#include "walk.h"
#include "board_stack.h"
#include "output_text.h"
#include "output.h"
#include "reverse_board.h"
#include "save.h"
#include "load.h"
#include "check_win.h"


//–l "old_game_file_name”
//–n "new_game_file_name"
//test


int main(int argc, const char * argv[]) {
    
    
    NODE* top = NULL; //stack//row//column//棋子 玩家
    FILE *fp = NULL;//save    
    system("clear");
    
    if(argv[1][1] == 'n'){
        
        int board_tmp [9][9][2]={0};
        initial_board(board_tmp);
        top = push(top, board_tmp);
        
        //-----------------------------------//
        int position[2] = {0};//row, column
        position[0] = -1;
        position[1] = -1;
        int go[2] = {0};//row, column
        go[0] = -1;
        go[1] = -1;
        int player = 1;//player 1先手 1後手
        int win = 0;
        char mode = '0';
        int check = 0;
        //-----------------------------------//
        
        while(1){
            if(mode == 0) break;
            if(player == 1){
                output(top -> info);
                if(player == 1) printf("player x :");
                else printf("player y :");
                
                printf("choose row & column: (you can regret here) ");
                scanf("%d %d",&position[0],&position[1]);//輸入時要有空格
                
                if((position[0] == 0 || position[1] == 0) && top -> next != NULL){
                    top = pull(top);
                    if(player == 1) player = 2;
                    else player = 1;
                    system("clear");}
                //--------------------//
                
                if(top -> info[position[0]-1][position[1]-1][1] == 1){//player
                    
                    position[0] = 10 - position[0];
                    position[1] = 10 - position[1];
                        
                    printf("where to go (row & column): ");
                    scanf("%d %d",&go[0],&go[1]);//輸入時要有空格
                        
                    copy_board(top -> info, board_tmp);
                    reverse_board(board_tmp);
                    go[0] = 10 - go[0];
                    go[1] = 10 - go[1];
                    while(!solider(board_tmp[position[0]-1][position[1]-1][0], 0, player, position, go, board_tmp)){
                        printf("where to go (row & column)( 0 to choose another): ");
                        scanf("%d %d",&go[0],&go[1]);//輸入時要有空格
                        if(go[1] == 0 || go[0] == 0)break;
                        go[0] = 10 - go[0];
                        go[1] = 10 - go[1];
                            
                    }
                    if(solider(board_tmp[position[0]-1][position[1]-1][0],0, player, position, go, board_tmp)){
                        solider(board_tmp[position[0]-1][position[1]-1][0],
                                1, player, position, go, board_tmp);
                        reverse_board(board_tmp);
                        top = push(top, board_tmp);
                        player = 2;
                        mode = save(mode, argv[2], fp, top);
                        if (mode == 'e')break;
                    }
                }
                system("clear");
            }
            else if (player == 2){
                reverse_board(top -> info);
                output(top -> info);
                reverse_board(top -> info);
                if(player == 1) printf("player x :");
                else printf("player y :");
                
                printf("choose row & column: (you can regret here) ");
                scanf("%d %d",&position[0],&position[1]);//輸入時要有空格
                
                if((position[0] == 0 || position[1] == 0) && top -> next != NULL){
                    top = pull(top);
                    if(player == 1) player = 2;
                    else player = 1;
                    system("clear");}
                //--------------------//
                position[0] = 10 - position[0];
                position[1] = 10 - position[1];
                if(top -> info[position[0]-1][position[1]-1][1] == 2){//player
                    
                    printf("where to go (row & column): ");
                    scanf("%d %d",&go[0],&go[1]);//輸入時要有空格
                    go[0] = 10 - go[0];
                    go[1] = 10 - go[1];
                    copy_board(top -> info, board_tmp);
                    while(!solider(board_tmp[position[0]-1][position[1]-1][0],
                                0, player, position, go, board_tmp)){
                        printf("where to go (row & column)( 0 to choose another): ");
                        scanf("%d %d",&go[0],&go[1]);//輸入時要有空格
                        if(go[1] == 0 || go[0] == 0)break;
                        go[0] = 10 - go[0];
                        go[1] = 10 - go[1];
                            
                    }
                    if(solider(board_tmp[position[0]-1][position[1]-1][0],0, player, position, go, board_tmp)){
                        solider(board_tmp[position[0]-1][position[1]-1][0],1, player, position, go, board_tmp);
                        top = push(top, board_tmp);
                        player = 1;
                        mode = save(mode, argv[2],fp, top);
                        if (mode == 'e')break;
                    }
                }
                system("clear");
            }
            win = check_win(top -> info);
            if(win == 1){
                printf("\nenter 0 to exit");
                scanf("%d",&check);
                break;
            }
            
        }
    }
    
    else if(argv[1][1] == 'l'){
        
        top = load(argv[2], fp, top);
        
        NODE *now = top;
        
        NODE *tmp = now;
        
        char mo = '0';
    
        while(1){
                        
            output(now -> info);
            printf("b to back f to front e to exit\nif now is the first step, b will go to last step\nif now is the last step, f will go to first step");
            scanf("%c",&mo);
            getchar();
            
            if(mo == 'e') break;
            
            
            if(mo == 'f'){
                now = now -> next;
            }
            else if(mo == 'b'){
                while(tmp -> next != now)tmp = tmp -> next;
                now = tmp;
            }
            system("clear");
        }
    }
    return 0;
}

