#include <stdio.h>
int main()
{
	int a, z, sum, count;
	scanf("%d", &a);
	Start:
		scanf("%d", &z);
		if(a>=z)
            goto Start;

	sum=0;
	count=0;

	while(sum<=z){
		sum+=a;
		count++;
		a++;
	}

	printf("%d\n", count);

	return 0;
}
