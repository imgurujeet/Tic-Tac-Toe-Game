#include<stdio.h>
//#include<conio.h>
void printBoard(char board[]){

    printf("\n\n");
    printf("======TIC TAC TOE GAME======\n\n");
    printf("        |        |       \n");
    printf("    %c   |   %c    |   %c  \n",board[1],board[2],board[3]);
    printf(" _______|________|_______\n");
    printf("        |        |       \n");
    printf("    %c   |   %c    |   %c  \n",board[4],board[5],board[6]);
    printf(" _______|________|_______\n");
    printf("        |        |       \n");
    printf("    %c   |   %c    |   %c  \n",board[7],board[8],board[9]);
    printf("        |        |       \n");
}
int checkWin(char board[]){
    if(board[1]==board[2] && board[2]==board[3]){
        return 1;
    }
     if(board[1]==board[4] && board[4]==board[7]){
        return 1;
    }
     if(board[7]==board[8] && board[8]==board[9]){
        return 1;
    }
     if(board[3]==board[6] && board[6]==board[9]){
        return 1;
    }
     if(board[1]==board[5] && board[5]==board[9]){
        return 1;
    }
     if(board[3]==board[5] && board[5]==board[7]){
        return 1;
    }
     if(board[2]==board[5] && board[5]==board[8]){
        return 1;
    }
     if(board[4]==board[5] && board[5]==board[6]){
        return 1;
    }
    int count=0;
    for(int i=1;i<=9;i++){
        if(board[i]=='X' || board[i]=='O'){
            count++;
        }
    }
    if(count==9){
        return 0;
    }

    return -1;


}
int main(){
    int player=1,input,status=-1;
    char board[]={'0','1','2','3','4','5','6','7','8','9'};
    while(status==-1){
        printBoard(board);
        player=(player%2==0)? 2:1;
    char mark=(player==1)?'X':'O';
    printf("Enter a Number position for player %d: ",player);
    scanf("%d",&input);
    if(input<1 || input>9 || (board[input]=='X') || board[input]=='O'){
        printf("Invalid Input or Position already Taken\n");
        continue;//restarting the loop if invalid or taken position1
    }
    board[input]=mark;
    
    int result = checkWin(board);
        if (result == 1) {
            printf("Player %d wins!\n", player);
            status = 1; // Set status to end the loop
        } else if (result == 0) {
            printf("It's a draw!\n");
            status = 0; // Set status to end the loop
        }
    player++;

    }
    
    return 0;
}