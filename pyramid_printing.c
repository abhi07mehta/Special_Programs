#include<stdio.h>
int pyramid(){
  int pyramid_size;
printf("enter size of pyramid\n");
scanf("%d", &pyramid_size);

for(int i=1;i<pyramid_size;i++)
{
  for(int j=1;j< 2*pyramid_size-1;j++)
  {
    if(j>=pyramid_size-(i-1) && j<=pyramid_size+(i-1))
    {
      printf("*");
    }
    else
    printf(" ");
  }
  printf("\n");

}
return 0;
}