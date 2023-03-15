# include<stdio.h>

int main(){
    int age ;
    printf("what is your age ? \n");
    scanf("%d", &age);
    age > 18 ? printf("adult") : printf("minor");
    return 0 ;
}