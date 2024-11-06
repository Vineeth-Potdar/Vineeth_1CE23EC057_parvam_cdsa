#include<stdio.h>
int main(){
    int num,k,count=1,power;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Enter number of power : ");
    scanf("%d",&power);
    for(k=1;count<=power;k=k*num){
        printf("%d\n",k);
        count++;
    }
}