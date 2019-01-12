#include<stdio.h> 
#include<string.h>
#include<stdlib.h> 

// Declarations 
char board[9] = {'o', '0', '1', '2', '3','4','5','6','7','8','9'};

int gameTime();
void drawBoard();

// Changes: moved the int main to the beginning 
int main()
{
    //  printf("Enter a value: ")

    drawBoard();
    return 0;
}



/********************
 * Actual Tic-Tac-Toe Board
 *******************/
void drawBoard() 
{
  char board[9];
  int i;
  
  for( i = 0; i < 9; i++){
    board[i]= ' ';
    }
   printf(" %c | %c | %c \n", board[6], board[7], board[8]);
   printf("---+---+---\n");
   printf(" %c | %c | %c \n", board[3], board[4], board[5]);
   printf("---+---+---\n");
   printf(" %c | %c | %c \n", board[0], board[1], board[2]);
  }

