#include<stdio.h>
#include<math.h>

int prime(){
  int x,val;
  printf("please enter a number");
  scanf("%d",&x);
  val=ceil(sqrt(x));

  int val1=x,count=0;

  for(int i=2;i<val;i++)
  {
    if(val1%i==0)
    count=1;
  }
  if((count==0 && val1!=1)||val1==2||val1==3){
printf("number is prime\n");
  }
  else{
    printf("number is not prime\n");
  }
  return 0;
}

