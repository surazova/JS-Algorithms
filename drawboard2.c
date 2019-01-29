#include<stdio.h> 
#include<string.h>
#include<stdlib.h> 

// Declarations 
char board[10] = {'0', '1', '2', '3','4','5','6','7','8','9'};

int gameTime();
void drawBoard();

// Changes: moved the int main to the beginning 
int main()
{
    int player = 1, i, choice;
    
    char place;
    
    // do...while loop 
    do {
        drawBoard();
        // if player is even then it's player 1, otherwise, it's player 2
        // if (player % 2) {
        //     player = 1;
        // } else {
        //     player = 2;
        // }
       player = (player % 2) ? 1 : 2; 
    
    printf("Player %d, take your pick: ", player);
    // scanf accepts an input from standard in (uses %d, float is %f, char uses %c)
    scanf("%d", &choice);
    // if it's player 1, then use X, otherwise, use O
    // if (player == 1) {
    //   'X';
    // } else {
    //   'O';
    // }
    place = (player == 1) ? 'X' : 'O';
    
    //Do...while loop: Body is executed once, before checking the test expression at the end of the loop
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
          
        else 
        {
          printf("Invalid move ");
          
          player--;
          // Reads a character from a screen
          getchar();
        }
        i = gameTime();
        
        player++;
    }
    // Loop condition
    // while i = -1: the game is still in progress and will return the tic tac toe board from "drawBoard"
    while (i == -1);
    drawBoard();
    
    // if i = 1 the game is over and winner is decided   
    if (i == 1)
      printf("\aPlayer %d won!", --player);
    // else if i = 0, then the game is over with a draw
    else 
      printf("\n\aGame draw!\n");

    getchar();
    return 0;
}

// The game
// 1 = game over 
// -1 = game is in progress 
// 0 = game over with draw 

int gameTime() 
{
  // Horizontal wins (012, 345, 678)
  if (board[0] == board[1] && board[1] == board[2])
    return 1;
  
  else if(board[3] == board [4] && board[4] == board[5])
    return 1;
  
  else if(board[6] == board[7] && board[7] == board[8])
    return 1;
    
  // Vertical wins (036, 147, 258)
  else if(board[0] == board[3] && board[3] == board[6])
    return 1;
    
  else if(board[1] == board[4] && board[4] == board[7])
    return 1;
    
  else if(board[2] == board[5] && board[5] == board[8])
    return 1;
  
  // Diagonal wins (246, 048)
  else if(board[2] == board[4] && board[4] == board[6])
    return 1;
    
  else if(board[0] == board[4] && board[4] == board[8])
    return 1;
    
  // TODO: Add a functionality to drop a game if you want to and then automatically restart the game
  //else if(board[11])
  //  return 1;8
    
  // For draws/no wins = there is no above combination 
  
  else if (board[0] != 0 && board[1] != '1' && board[2] != '2' && board[3] != '3' && board[4] != '4'
  && board[5] != '5' && board[6] != '6' && board[7] != '7' && board[8] != '8')
  
    return 0;
  
  else 
    return -1;
}
/********************
 * Actual Tic-Tac-Toe Board
 *******************/
void drawBoard() 
{
  // clears the board every time and displays the rest (so the game keeps going)
  system("cls");
  printf("Let's Play Some Tic-Tac-Toe!\n");
  printf("Player 1 is X - Player 2 is O\n");
  
  // for( i = 0; i < 9; i++){
  //   board[i]= ' ';
  //   }
   printf(" %c | %c | %c \n", board[6], board[7], board[8]);
   printf("---+---+---\n");
   printf(" %c | %c | %c \n", board[3], board[4], board[5]);
   printf("---+---+---\n");
   printf(" %c | %c | %c \n", board[0], board[1], board[2]);
  }

