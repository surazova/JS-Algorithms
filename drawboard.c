#include<stdlib.h> 
#include<stdio.h> 
#include<string.h>

void drawBoard()
{
    char board[3][7]; 
    int i;
    int j;

    for ( i = 0 ; i < 3 ; i++ ){
        for ( j = 0 ; j < 6 ; j=j+2 ){ 
            board[ i ][ j ] = '|';
        }
    }

    for ( i = 0 ; i < 3 ; i++ ){
        for ( j = 1 ; j < 6 ; j = j+2 ){
            board[ i ][ j ] = '_';
        }
    }

    for ( i = 0 ; i < 3 ; i++ )
        {
            for ( j = 0 ; j < 6 ; j++ )
            {
            printf( "%c", board[i][j] ); 
            }
            printf("\n");
        }
}


int main()
{
    drawBoard();
    return 0;
} 