#include <stdio.h>
int main()
{
	double input, sum, average;
	sum=0;
	int count=0;

	while(1){
		
		scanf("%lf", &input);
		if(input>=0 && input<=10){
			sum+=input;
			count++;
		}

		else
			printf("nota invalida\n");

		if(count==2){
			average=sum/2.0;
			printf("media = %0.2lf\n", average);
			
		}
	}

	return 0;
}
