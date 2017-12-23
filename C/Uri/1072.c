#include <stdio.h>
int main()
{
	int i, n, x, count=0, rest;
	scanf("%d", &n);

	for(i=0; i<n; i++){
		scanf("%d", &x);
		if(x>9 && x<21){
			count++;
		}
	}

	rest= n-count;

	printf("%d in\n", count);
	printf("%d out\n", rest);

	return 0;
}
