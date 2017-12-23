#include <stdio.h>
int main()
{
	int x, y, testcase, i;
	double quotient;

	scanf("%d", &testcase);

	for(i=0; i<testcase; i++){
		scanf("%d %d", &x, &y);
		if(y!=0){
			quotient=(float)x/(float)y;
			printf("%0.1lf\n", quotient);
		}

		else
			printf("divisao impossivel\n");

	}

	return 0;

}
