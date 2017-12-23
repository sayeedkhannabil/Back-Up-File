#include <stdio.h>
int main()
{
	double i, j, k, m;
	k=1;
	m=3;
	int x, c, n;
	c=2;

	for(i=0.0; i<1.9;){
		for(j=k; j<=m; j++){
			if(i==0.0 || i==1.0){
				printf("I=%.0lf J=%.0lf\n", i, j);
			}

			else
				printf("I=%0.1lf J=%0.1lf\n", i, j);
		}

		k+=0.2;
		m+=0.2;
		i=i+0.2;
	}
	for(x=3; x<=5; x++){
		printf("I=%d J=%d\n", c, x);
	}

	return 0;
}
