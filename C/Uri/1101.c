#include <stdio.h>
int main()
{
	int i, j, range1, range2, sum;



	while(1){
        scanf("%d %d", &range1, &range2);
        if(range1>0 && range2>0){
        sum=0;
		if(range2>range1){
			for(j=range1; j<=range2; j++){
				printf("%d ", j);
				sum+=j;
			}
		}

		else{
			for(j=range2; j<=range1; j++){
				printf("%d ", j);
				sum+=j;
			}
		}

		printf("Sum=%d\n", sum);
        }
        else
            break;
	}

	return 0;
}

