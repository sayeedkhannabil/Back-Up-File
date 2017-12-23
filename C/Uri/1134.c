#include <stdio.h>
int main()
{
	int count_alc, count_gas, count_disel, input;
	count_disel=0;
	count_gas=0;
	count_alc=0;

	while(input!=4){
		scanf("%d", &input);
		if(input==1){
			count_alc++;
		}
		if(input==2){
			count_gas++;
		}
		if(input==3){
			count_disel++;
		}
	}

	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", count_alc, count_gas, count_disel);

	return 0;
}