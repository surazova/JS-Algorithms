#include <stdio.h>

int j, count, t = 0;

void tree(int);

int main() {
  int x;
    system("cls");
    printf("Enter number of lines: ");
    scanf("%d", &x);
  count = x;
  tree(x);
    getchar();
}

void tree(int x)
{
  int i;
  for(i = x + x -1; i > 0; i --)
  printf("*");
  x--;
  
  printf("\n");
  j = 0;
    while(j <= t)
    {
      printf(" ");
      j++;
    }
    if(t < count)
    t++;
    if(x > 0)
    tree(x);
}

