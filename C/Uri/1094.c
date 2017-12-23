#include <stdio.h>
int main()
{
	int testcase, i, j, count_total, count_coelho, count_rato, count_sapo, amount;
	double percantage_coelho, percantage_rato, percantage_sapo;
	scanf("%d", &testcase);

	count_coelho=0;
	count_rato=0;
	count_sapo=0;

	char c;

	for(i=0; i<testcase; i++){
		scanf("%d %c", &amount, &c);

		if(c=='C'){
			count_coelho+=amount;
		}
		else if(c=='R'){
			count_rato+=amount;
		}
		else{
			count_sapo+=amount;
		}
	}

	count_total= count_coelho+count_sapo+count_rato;

	percantage_coelho=(count_coelho*100.00)/(count_total*1.0);
	percantage_rato=(count_rato*100.00)/(count_total*1.0);
	percantage_sapo=(count_sapo*100.00)/(count_total*1.0);

	printf("Total: %d cobaias\n", count_total);
	printf("Total de coelhos: %d\n", count_coelho);
	printf("Total de ratos: %d\n", count_rato);
	printf("Total de sapos: %d\n", count_sapo);
	printf("Percentual de coelhos: %0.2lf %%\n", percantage_coelho);
	printf("Percentual de ratos: %0.2lf %%\n", percantage_rato);
	printf("Percentual de sapos: %0.2lf %%\n", percantage_sapo);

	return 0;

}
