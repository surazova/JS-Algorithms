#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
  if (argc != 2 || atoi(argv[1]) < 0)
  {
    printf("Put in a command line argument!\n");
    return 1;
  }
}
{
// {
// 	char str[100];
// 	char strtwo[100];
// 	int i;
// 	int j;
	
//   // Enter in the first string 
// 	printf("Enter the first word: ");
// 	fgets(str,100,stdin); 
	
// 	// Enter in the second strings
// 	printf("Enter the second word: ");
// 	fgets(strtwo, 100, stdin);
	
// 	// Converting to ASCII
// 	//printf("The string is: %s\n",str);
// 	printf("The first string's ASCII value is: ");
	
// 	// Loop to change to ASCII 
// 	for(i = 0; str[i]!='\0'; i++)
// 	{
// 		printf("%02X ",str[i]);
// 	}
// 	  printf("\n");

//   printf("The second string's ASCII value is: ");
  
// 	for(j = 0; strtwo[j]!='\0'; j++)
// 	{
// 	  printf("%02X ", strtwo[j]);
// 	}
// 	  printf("\n");
	
// 	// Subtract each ASCII value from both strings and return an array 
	
// 	  for (i = 0 ; i < sz ; ++i)
//     {
//         output[i] = a[i] - b[i];
//     }
    
  // Subtract a character from a chracter
  char c1 = 'a';
  char c2 = 'c';
  int diff = c2 - c1;
  char ans = diff + 'a' - 1; //add 'a' and subtract 1 to normalize it
  
	return 0;
}