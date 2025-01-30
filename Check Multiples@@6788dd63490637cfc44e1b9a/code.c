#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%b==0){
        printf("%c",'Yes');
    }
    else{
        printf("%c",'No');
    }
    return 0;
}