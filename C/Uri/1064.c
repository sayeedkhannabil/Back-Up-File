#include <stdio.h>
int main()
{
	float input, average, sum=0;
	int i, count=0;

	for(i=0; i<6; i++){
		scanf("%f", &input);
		if(input>0){
			count++;
			sum+=input;
		}
	}

	average= sum/count;

	printf("%d valores positivos\n", count);
	printf("%0.1f\n", average);

	return 0;
}
