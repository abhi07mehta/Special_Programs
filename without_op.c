#include<stdio.h>
int without_op(){
  printf("Enter two number you wish to add");
  int x,y;
  scanf("%d %d",&x,&y);

  while(y!=0)
  {
    x++;
    y--;
  }
  printf("your addition is:- %d\n",x);
  return 0;
}