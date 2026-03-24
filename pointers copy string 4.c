#include<stdio.h>
int main(){
    char s[101],t[101];
    char *p=s;
    char *q=t;
    fgets(s,sizeof(s),stdin);
    while(*p != '\0'){
        *q=*p;
        p++;
        q++;
    }
    *q='\0';
    printf("%s",t);
    return 0;
}