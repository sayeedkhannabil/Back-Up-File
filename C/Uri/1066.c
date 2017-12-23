#include <stdio.h>
int main()
{
	int i, input, count_even=0, count_odd=0, count_positive=0, count_negative=0;

	for(i=0; i<5; i++){
		scanf("%d", &input);

		if(input%2==0 || input%(-2)==0 || input==0){
			count_even++;
		}

		if(input%2!=0 || input%(-2)!=0){
			count_odd++;
		}
		if(input>0){
			count_positive++;
		}
		if(input<0){
			count_negative++;
		}
	}

	printf("%d valor(es) par(es)\n", count_even);
	printf("%d valor(es) impar(es)\n", count_odd);
	printf("%d valor(es) positivo(s)\n", count_positive);
	printf("%d valor(es) negativo(s)\n", count_negative);

	return 0;
}
