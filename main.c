#include<stdio.h>

extern int  pyramid();
extern int pallindrome();
extern int amstrong();
extern int strong();
extern int prime();
extern int without_op();
extern int fibonacci();
extern int floyed();
extern int BTD();
extern int power_of_int();
extern int leap();
extern int perfect();

int main(){
  int selector;
printf("welcome to special program series\n");
printf("please select from following program\n");
do {
printf("1:-pyramid printing\n");
printf("2:-pallindrome check\n");
printf("3:-amstrong number\n");
printf("4:-strong number\n");
printf("5:-prime number\n");
printf("6:add two number without using '+' operator\n");
printf("7:-print fibonacci series\n");
printf("8:-floyed's triangle\n");
printf("9:- binary to decimal\n");
printf("10:-calculate power of integer\n");
printf("11:-leap year\n");
printf("12:-perfect number\n");
printf("13:-i do not want to print\n");

  scanf("%d",&selector);
  printf("you have selected %d number\n",selector);
  switch (selector){
    case 1: pyramid();
            break;
    case 2: pallindrome();
            break;
    case 3: amstrong();
           break;
    case 4: strong();
            break;
    case 5: prime();
            break;
    case 6: without_op();
            break;
    case 7: fibonacci();
            break;
    case 8: floyed();
            break;
    case 9: BTD();
            break;
    case 10: power_of_int();
            break;
    case 11: leap();
            break;
    case 12: perfect();
            break; 
    case 13: printf("OK GOT it");
            break;
    default: printf("you have not selected any number");
            break; 
  }
 } while(selector !=13);
}