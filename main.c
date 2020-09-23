#include <stdio.h>
int pyramid_n();

int main(void) {


printf("welcome to special program world\n please select below option for special program\n");

printf("1:pyramid printing\n2:palindrome number\n3:amstrong number\n4:strong number\n5:prime number\n6:add two number without using '+'operator\n7:fibonacci series\n8:floyd's triangle\n9:binary to decial\n10:calculate power of integer\n11:leap year\n12:perfect number\n");

printf("please enter your choice:-");
int choice;
scanf("%d",&choice);

switch(choice)
{
  case 1: pyramid_n();
  break;
}



}

  int pyramid_n()
  {

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

//