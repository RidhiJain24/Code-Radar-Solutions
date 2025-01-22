#include <stdio.h>
int main(){
    int age;
    char name[100];
    char hobby[100];
    scanf("%s %d",&name,&age);
    printf("Name: %s \n Age: %d \n",name,age);

    scanf("%s",&hobby);
    printf("Hobby: %s",hobby);
    return 0;
    
}