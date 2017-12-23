#include <stdio.h>

int main()
{
	int inter, gremio, input, count_grenais, count_inter, count_gremio, count_empates;
	count_empates=0;
	count_gremio=0;
	count_inter=0;
	count_grenais=0;

	Start:
		scanf("%d %d", &inter, &gremio);
		count_grenais++;
		if(inter>gremio){
			count_inter++;
		}
		else if(inter<gremio){
			count_gremio++;
		}
		else if(inter==gremio){
			count_empates++;
		}

	printf("Novo grenal (1-sim 2-nao)\n");
	scanf("%d", &input);

	if(input==1){
		goto Start;
	}
	if(input==2){
		printf("%d grenais\n", count_grenais);
		printf("Inter:%d\n", count_inter);
		printf("Gremio:%d\n", count_gremio);
		printf("Empates:%d\n", count_empates);

		if(count_inter>count_gremio){
			printf("Inter venceu mais\n");
		}
		else if(count_inter<count_gremio){
			printf("Gremio venceu mais\n");
		}
		else if(count_inter == count_gremio){
			printf("Não houve vencedor\n");
		}

		return 0;
	}

}