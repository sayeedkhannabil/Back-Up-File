#include <stdio.h>
int main()
{
	int a[100];
	int i, m=0;

	for(i=0; i<100; i++){
		scanf("%d", &a[i]);
	}

	for(i=1; i<100; i++){
		if(a[i]>a[m]){
			m=i;
		}
	}

	printf("%d\n%d\n", a[m], m+1);

	return 0;
}