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
    drawBoard();
    
    player = (player % 2) ? 1 : 2;
    
    printf("Player %d, make your choice: ", player);
    
    scanf("%d", &choice);
    
    place = (player == 1) ? 'X' : 'O';
    
    // if...else...if loop that places your chosen number (string) inside of the set index of the board 
    if (choice == 0 && board[0] == '0')
      board[0] = place;
    
    else if (choice == 1 && board[1] == '1')
      board[1] = place;
      
    else if (choice == 2 && board[2] == '2')
      board[2] = place;
          
    else if (choice == 3 && board[3] == '3')
      board[3] = place;
          
    else if (choice == 4 && board[4] == '4')
      board[4] = place;
          
    else if (choice == 5 && board[5] == '5')
      board[5] = place;
          
    else if (choice == 6 && board[6] == '6')
      board[6] = place;
          
    else if (choice == 7 && board[7] == '7')
      board[7] = place;
          
    else if (choice == 8 && board[8] == '8')
      board[8] = place;
          
    else if (choice == 9 && board[9] == '9')
      board[9] = place;
          
    else if (choice == 10 && board[10] == '10')
      board[10] = place;
          
    else if (choice == 11 && board[11] == '11')
      board[11] = place;    
    
    else if (choice == 12 && board[12] == '12')
      board[12] = place;    
    
    else if (choice == 13 && board[13] == '13')
      board[13] = place;
          
    else if (choice == 14 && board[14] == '14')
      board[14] = place;    
    
    else if (choice == 15 && board[15] == '15')
      board[15] = place;
    
    /////
    else 
    {
      printf("Invalid move!");
      
      player--;
      
      getChar();
    }
    i = gameTime();
    
    player++;
  }
  
  //While condition 
  while(i == -1);
  drawBoard();
  if (i == 1)
    printf("\aPlayer %d won!!!!", --player);
  else 
    printf("\n\a Game ends in a draw!!!!\n");
    
    getchar();
    return 0;
}

/// Game conditions 
// -1: Game is in progress
// 0: Game is over with a draw
// 1: Game is over with a winner

int gameTime()
{
  // Horizontal wins with all Xs or all Os
  // 12, 13, 14, 15
  // 8, 9, 10, 11
  // 4, 5, 6, 7
  // 0, 1, 2, 3
  
  if (board[12] == board[13] && board[13] == board[14] && board[14] == board[15])
    return 1;
  
  if(board[0] == board)
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