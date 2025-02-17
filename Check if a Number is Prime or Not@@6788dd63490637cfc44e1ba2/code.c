#include<stdio.h>
int main(){
    int n,i,flag=0;
    scanf("%d",&n);
    if(n<2){
        printf("Not Prime");
    }
    for(i=2;i*i<=n;i++){
        flag==1;
        return 0;
    }
    if(flag==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}