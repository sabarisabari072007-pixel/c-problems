#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    int *p=arr;
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    for(int i=0;i<n;i++){
        sum+= *(p+i);
    }
    printf("%d",sum);
}