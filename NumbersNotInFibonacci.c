#include<stdio.h>
int main(){
    long long int i,j,k,n,x,v,c;
    x = 0;
    v = 1;
    for(i=0;i<10;i++){
        c = v;
        v = x+v;
        x = c;
        for(j = x+1; j<v; j++){
            printf("%d ",j);
        }
    }
}
