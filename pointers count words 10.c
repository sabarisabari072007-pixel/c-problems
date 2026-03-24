#include<stdio.h>
int main(){
    char str[200];
    scanf("%[^\n]",str);
    char*ptr=str;
    int count=1;
    while(*ptr!='\0'){
        if(*ptr==' '){
            count++;
        }
        ptr++;
    }
    printf("%d",count);
}