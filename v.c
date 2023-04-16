#include<stdio.h>
void main(){
    int n,c=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=n+1; ;i++){
        for(int j=1; j<=i; j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==2){printf("the next prime number is: %d\n",i);break;}
        else{c=0;}
    }
}