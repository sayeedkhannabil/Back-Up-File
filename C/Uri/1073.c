#include <stdio.h>
#include <math.h>
int main()
{
	int i, n, power;
	scanf("%d", &n);

	for(i=2; i<=n; i++){
		if(i%2==0){
			power= pow(i, 2);
			printf("%d^2 = %d\n", i, power);
		}
	}

	return 0;
}
