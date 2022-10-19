#include<stdio.h>
struct pkt{
char ch1;
char ch2[2];
char ch3;
};
void main(){
int num,temp,r1,r2,r3,r4,new_num=0;
printf("Enter a number");
scanf("%d",&num);
r1=num%10;
num=num/10;
r2=num%10;
num=num/10;
r3=num%10;
r4=num/10;
struct pkt var;
var.ch1=r1+48;
var.ch2[0]=r2+48;
var.ch2[1]=r3+48;
var.ch3=r4+48;
printf("\nvalue stored in structure variable ch1 %c",var.ch1);
printf("\nvalue stored in structure variable ch2[0] %c",var.ch2[0]);
printf("\nvalue stored in structure variable ch2[1] %c",var.ch2[1]);
printf("\nvalue stored in structure variable ch3 %c",var.ch3);
new_num=(var.ch3-48)*10+(var.ch2[1]-48);
new_num=new_num*10+(var.ch2[0]-48);
new_num=new_num*10+(var.ch1-48);
printf("\nThe original number is %d",new_num);
}
