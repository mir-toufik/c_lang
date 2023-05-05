#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++){
	    int N;
	    scanf("%d",&N);
	    if(N%2==0)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}