#include <stdio.h>
int main()
{
	int i, sum, x, y;
	sum=0;
	scanf("%d %d", &x, &y);

	if(x>y){
		for(i=y; i<=x; i++){
		    if(i%13!=0){
			  sum+=i;
		    }
	    }
    }

	else if(x<y){
		for(i=x; i<=y; i++){
		    if(i%13!=0){
			  sum+=i;
        }
        }
	}

	printf("%d\n", sum);

	return 0;
}
