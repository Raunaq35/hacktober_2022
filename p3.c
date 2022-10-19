#include<stdio.h>
void main(){
short int a,d,e; //for 10 it will show a  but if i take data type as unsigned int then it will show the number
printf("Enter a number");
scanf("%hu",&a);
char p=(char)&a;
char b,c;
if(p){
printf("The machine is in little endian");
}
else{
printf("The machine is in big endian");
}

b=a;
c=a>>8;

printf("\nin the first byte position%d \n in the second byte position %d",b,c);
printf("\nCHANGING THE ENDIANNESS");

d=a & 0x00FF<<8;
e=a & 0xFF00>>8;

int result=(d|e);

printf("\nAfter changing the endianness\nin the first byte position%d \n in the second byte position %d",d,e);
printf("\n the number is 0x%x",result);
}
