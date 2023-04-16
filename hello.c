#include<stdio.h>
int main(){
    int num;
    printf("enter an integer");
    scanf("%d",&num);
    //true if num is perfectly divisble by 2 
    if(num % 2 == 0)
    printf(" is even.");
    else
    printf(" is odd.");
    return 0;
}