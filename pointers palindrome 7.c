#include<stdio.h>
int main(){
    char str[101];
    int length=0;
    scanf("%s",str);
    while(str[length]!='\0'){
        length++;
    }
    char *start=str;
    char *end=str+length-1;
    int palindrome=1;
    while(start<end){
        if(*start!=*end){
            palindrome=0;
            break;
        }
        start++;
        end--;
    }
    if(palindrome){
        printf("Yes");
    }
    else{
        printf("No");
    }
}