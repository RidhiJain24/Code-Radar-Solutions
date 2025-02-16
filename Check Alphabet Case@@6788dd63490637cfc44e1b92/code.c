#include<stdio.h>
int main(){
    char letter;
    scanf("%c",letter);
    if((letter>='A')&&(letter<='Z')){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}