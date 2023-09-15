#include<stdio.h>
#include<conio.h>

void add(int i , int j){

printf("\n Add : %d",i+j);

}

void sub(int i , int j){

printf("\n sub : %d",i-j);

}

int mul(int i , int j){

return i*j;

}


void main(){

void (*p)()=&add;
int (*p1)()=&mul;
int num;
clrscr();


(*p)(2,5);

p=&sub;
(*p)(12,10);

num= (*p1)(42,10);

printf("\n MUL ::  %d",num);


getch();

}
