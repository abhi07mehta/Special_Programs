#include<stdio.h>

int amstrong()
{
  int Number,count=0,cnt,rem,q,result=0,Mul;
     printf("please enter a number");
     scanf("%d",&Number);
        q=Number;

  while(q!=0)
    {
        q=q/10;
        count++;
    }

        cnt=count;
        q=Number;
  
  while(q!=0)
  {
        rem=q%10;
        Mul=1;
      while(cnt!=0)
      {
        Mul=Mul*rem;
        cnt--;
      }
        q=q/10;
        result=result+Mul;
        cnt=count;
  }

  if(result==Number)
  {
    printf("Number is Amstrong\n");
  }
  else{
    printf("NUmber is not Amstrong\n");
  }
  return 0;
}