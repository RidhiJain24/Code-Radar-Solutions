#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=90){
        printf("%s",'A');
    }
    else if(a<90 || a>=80){
        printf("%s",'B');
    }
    else if(a<80 || a>=70){
        printf("%s",'C');
    }
    else if(a<70 || a>=60){
        printf("%s",'D');
    }
    else{
        printf("%s",'F');
    }
    retur 0;
}