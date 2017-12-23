#include <stdio.h>
int main()
{
	int testcase, i, a, b, c;
	scanf("%d", &testcase);

	a=0;

	for(i=0; i<testcase; i++){
		a++;
		b=a*a;
		c=b*a;
		printf("%d %d %d\n", a, b, c);
		b++;
		c++;
		printf("%d %d %d\n", a, b, c);
	}

	return 0;
}
