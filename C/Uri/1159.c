#include <stdio.h>
int main()
{
	int input, sum, i;
	while(1){
		scanf("%d", &input);

		sum=0;

		if(input==0)
			break;

		if(input%2==1)
			input+=1;

		for(i=0; i<5; i++){
			sum+=input;
			input+=2;
		}

		printf("%d\n", sum);
	}

	return 0;
}
