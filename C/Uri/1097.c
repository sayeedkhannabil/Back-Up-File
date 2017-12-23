#include <stdio.h>
int main()
{
	int i, j, k, m;
	k=7;
	m=5;
	for(i=1; i<=9; i+=2){
		for(j=k; j>=m; j--){
			printf("I=%d J=%d\n", i, j);
		}
		k+=2;
		m+=2;
	}

	return 0;
}
