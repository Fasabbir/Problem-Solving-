#include <stdio.h>

int main() {
	int X,H,sum=0,result;
	scanf("%d %d",&X,&H);
	for(int i=4; i<X; i++){
	    sum = sum + 24;
	}
	result = sum + H;
	printf("%d",result);
	return 0;

}

