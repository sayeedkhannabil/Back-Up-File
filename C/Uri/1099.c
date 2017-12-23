#include <stdio.h>
int main()
{
	int testcase, i, j, range1, range2, sum;

	scanf("%d", &testcase);

	for(i=0; i<testcase; i++){
        sum=0;
		scanf("%d %d", &range1, &range2);
		if(range2>range1){
			for(j=range1+1; j<range2; j++){
				if(j%2==1)
					sum+=j;
			}
		}

		else{
			for(j=range2+1; j<range1; j++){
				if(j%2==1)
					sum+=j;
			}
		}

		printf("%d\n", sum);
	}

	return 0;
}
