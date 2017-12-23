#include <stdio.h>
int main()
{
	int a, n, i, sum;

	sum=0;

	scanf("%d", &a);
	Start:
		scanf("%d", &n);
		if(n<1){
			goto Start;
		}

	for(i=0; i<n; i++){
		sum+=a;
		a++;
	}
	printf("%d\n", sum);

	return 0;
}
