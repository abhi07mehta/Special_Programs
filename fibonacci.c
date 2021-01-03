#include<stdio.h>
int fibonacci(){
  int a,b,n,i,result;
  printf("Enter a number of term you want as output");
  scanf("%d",&n);

  a=0;
  b=1;

  for(i=1;i<=n;i++)
  {
    printf("%d\n",a);
    result=a+b;
    a=b;
    b=result;
  }
  return 0;
}