#include<stdio.h>
int strong(){
  int Number,fact=1,rem,q,result=0;
  printf("Enter a Number");
  scanf("%d",&Number);
  q=Number;
  while(q!=0)
  {
    rem=q%10;
    for(int i=1;i<=rem;i++)
    {
      fact=fact*i;
    }
    result=result+fact;
    fact=1;
    q=q/10;
  }
  if(Number==result)
  {
    printf("number is strong\n");
  }
  else{
    printf("number is not strong\n");
  }
  return 0;
}