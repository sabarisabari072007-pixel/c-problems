#include <stdio.h>
#include <string.h>
int main() {
    char s[50];int count=0;
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='0' && s[i]<='9'){
        count++;
        }
    }
    printf("%d",count);
    return 0;
}
