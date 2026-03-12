#include <stdio.h>
#include <string.h>
int main() {
    char s[50],ps[50];int j=0;
    scanf("%s", s);
    for(int i=strlen(s)-1;i>=0;i--){
        ps[j]=s[i];
        j++;
    }
    ps[j]='\0';
    if(strcmp(s,ps)==0){
        printf("Plaindrome");
    }
    else{
        printf("Not Plaindrome");
    }
    return 0;
}
