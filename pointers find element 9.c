#include<stdio.h>
int main(){
    int n,x;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    int *ptr=arr;
    int position=-1;
    for(int i=0;i<n;i++){
        if(*(ptr+i)==x){
            position=i+1;  // 1-based position
            break;
        }
    }
    printf("%d", position);
}