#include<stdio.h>
int perfect(){
  int number;
  printf("Enter a Number");
  scanf("%d",&number);

  int i,rem,sum=0;

  for(i=1;i<number;i++)
  {
      rem=number%i;
      if(rem==0)
      {
        sum=sum+i;
      }
  }
  if(number==sum)
  printf("%d is perfect number\n",sum);
  else
  printf("number is not perfect\n");

  return 0;
}