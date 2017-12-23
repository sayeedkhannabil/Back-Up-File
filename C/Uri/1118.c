#include <stdio.h>
void lala()
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
				break;
			}
    }
}

int main()
{

    int input2;
	Floor:
	    lala();

	Celling:
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d", &input2);
		if(input2==1){
			goto Floor;
		}
		else if(input2==2){
			return 0;
		}
		else
			goto Celling;


	return 0;
}
