#include <stdio.h>

int main(void) {

  int n;
  printf("please enter a length of pyramid \n");
  scanf("%d",&n);
  printf("you entered a length %d\n", n);

  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=2*n-1;j++)
    {
      if(j>=n-(i-1) && j<=n+(i-1))
      {
        printf("*");
      }
      else{
          printf(".");

      }
    
    }
      printf("\n");
  }

  return 0;
}