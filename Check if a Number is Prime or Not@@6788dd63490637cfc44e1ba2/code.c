#include<stdio.h>
int main(){
    int n,i,flag=0;
    scanf("%d",&n);
    if(n<2){
        printf("Not Prime");
    }
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}