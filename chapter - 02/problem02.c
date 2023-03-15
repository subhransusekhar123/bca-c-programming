# include<stdio.h>

int main(){
    char star;
    printf("tell a chara \n");
    scanf("%d", &star);
    printf("character is %d \n", star >= 0 && star <= 9);
}