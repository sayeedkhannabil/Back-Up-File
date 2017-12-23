#include <stdio.h>
int main()
{
	int n, i;
	float num1, num2, num3, w_average;
	scanf("%d", &n);

	for(i=0; i<n; i++){
        scanf("%f %f %f", &num1, &num2, &num3);

        w_average=((num1*2)+(num2*3)+(num3*5))/10;

        printf("%0.1f\n", w_average);
	}

	return 0;
}
