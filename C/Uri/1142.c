#include <stdio.h>
int main()
{
	int testcase, i, j, n;

	scanf("%d", &testcase);
	n=0;

	for(i=0; i<testcase; i++){
		for(j=n+1; j<n+4; j++){
			printf("%d ", j);
		}
		n+=4;
		printf("PUM\n");
	}
}
