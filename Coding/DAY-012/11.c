#include <stdio.h>

int main(){
    char a[]="ETALVIS";
    char *p;
    p=&a[7];
    printf("%d",*p);
    return 0;
}