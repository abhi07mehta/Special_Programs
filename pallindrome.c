#include<stdio.h>
int pallindrome(){
  int n,result=0,q,rem;
  printf("Enter a number\n");
  scanf("%d",&n);
  q=n;
  while(q!=0)
  {
    rem=q%10;
    result=result*10+rem;
    q=q/10;
  }
  if(result==n)
    printf("number is pallindrome\n");
    else
    printf("number is not pallindrome\n");

return 0;
}