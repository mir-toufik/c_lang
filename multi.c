#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++){
	    int N,M;
	    scanf("%d%d",&N,&M);
	    printf("%d\n",(N*M));
	}
	return 0;
}