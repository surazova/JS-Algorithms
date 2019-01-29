#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Declarations 

char board[16] = {'0', '1','2','3','4','5','6','7','8','9','10','11','12','13','14','15'};

int gameTime();
void drawBoard();

int main() 
{
  int player = 1, i, choice;
  
  char place;
  
  //if...else...if nested inside of a do...while loop 
  do {
    
  }
}

void drawBoard() {
  system("cls");
  printf("Want to play a game of Tic-Tac-Tomek!?\n");
  printf("player 1 is X - Player 2 is O\n");
  
  printf(" %c | %c | %c | %c \n", board[12], board[13], board[14], board[15]);
  printf("---+---+---+---\n");
  printf(" %c | %c | %c | %c \n", board [8], board[9], board[10], board[11]);
  printf("---+---+---+--- \n");
  printf(" %c | %c | %c | %c \n", board[4], board[5], board[6], board[7]);
  printf("---+---+---+--- \n");
  printf(" %c | %c | %c | %c \n", board[0], board[1], board[2], board[3])
}