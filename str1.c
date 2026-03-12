#include<stdio.h>
int main(){
    char name[100];
    int length=0;
    scanf("%s",&name);
    while(name[length]!='\0'){
        length++;
    }
    printf("%d",length);
}