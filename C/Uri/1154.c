#include <stdio.h>
int main()
{
	int input, count=0, sum=0;
	double average;

	while(1){
		scanf("%d", &input);
		if(input<0)
			break;

		sum+=input;
		count++;
	}
	average=(float)sum/(float)count;

	printf("%0.2lf\n", average);

	return 0;
}
