#include <stdio.h>
int main()
{
    float input, percantage;

    scanf("%f", &input);
    if(input>=0 && input<2000.01){
        printf("Isento\n");
    }
    if(input>2000 && input<=3000){
    	percantage= ((input-2000)*8)/100;
    	printf("R$ %0.2f\n", percantage);
    }
    if(input>3000 && input<=4500){
    	percantage=(((input-3000)*18)/100)+80.00;
    	printf("R$ %0.2f\n", percantage);
    }
    if(input>4500){
    	percantage=(((input-4500)*28)/100)+350.00;
    	printf("R$ %0.2f\n", percantage);
    }

    return 0;
}
