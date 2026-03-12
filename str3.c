#include <stdio.h>
#include <string.h>
int main() {
    char s[50];
    scanf("%s",s);
    for(int i=0;s[i]!='@';i++){
        printf("%c", s[i]);
    }

    return 0;
}
