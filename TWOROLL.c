#include <stdio.h>

int main() {
	int T,X,Y;
	scanf("%d",&T);
	while(T--){
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    int req_move = 50 - X;
	    int min_sum = 2 * Y;
	    int max_sum = 2 * Y + 10;
	    if(req_move >= min_sum && req_move <= max_sum){
	        printf("Yes\n");
	    }
	    else{
	        printf("No\n");
	    }
	}
	return 0;


}

