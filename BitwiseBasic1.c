#include<stdio.h>
typedef unsigned char BYTE;
int main(){
    unsigned int value;
    BYTE a,b,c,d;
    printf("Enter: ");
    scanf("%d",&value);
    a = (value&0xFF);
    b = ((value>>8)&0xFF);
    c = ((value>>16)&0xFF);
    d = ((value>>24)&0xFF);

    printf("a = %02X\nb = %02X\nc = %02X\nd = %02X\n",a,b,c,d);
    return 0;
}
