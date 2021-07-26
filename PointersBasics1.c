#include<stdio.h>
int main(){
    char *s[] = {"yellow","white","pink","violet"};
    char **ptr[] = {s+3,s+2,s+1,s};
    char ***p = ptr;
    ++p;
    printf("%s",**p+1);
    return 0;
    
}
