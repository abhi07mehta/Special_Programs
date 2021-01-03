#include<stdio.h>
int leap(){
  int x;
  printf("Enter year:- ");
  scanf("%d",&x);

  if(x%400==0){
  printf("%d is leap year\n",x);
  }
  else if(x%100==0){
    printf("%d is not leap year\n",x);
  }
  else if(x%4==0)
  {
    printf("%d is leap year\n",x);
  }
  else{
    printf("%d  is not leap year\n ",x);
  }
  return 0;
}