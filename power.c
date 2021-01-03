#include<stdio.h>
int power_of_int(){
  int base,expo,exp,power=1;

  printf("Enter base:- ");
  scanf("%d",&base);
  printf("Enter Exponent");
  scanf("%d",&expo);

  exp=expo;

  if(expo>0)
  {
    while(expo!=0)
    {
      power=power*base;
      expo--;
    }
  }
  else{
    while(expo!=0)
    {
      power=power*(1.0/base);
      expo++;
    }
  }
  printf("base = %d, expo = %d, power = %d\n",base,expo,power);
    return 0;
}