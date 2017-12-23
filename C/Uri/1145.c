#include <stdio.h>
int main()
{
	int i, j, x, y, k;

	scanf("%d %d", &x, &y);
	k=0;
	for(i=1; i<=y; i++){
		k++;
		if(k==x){
			printf("%d", i);
		}
		else
			printf("%d ", i);

		if(k==x){
			k=0;
			printf("\n");
		}
	}



	return 0;
}
