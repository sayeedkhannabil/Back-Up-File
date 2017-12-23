#include <stdio.h>
int main()
{
	int input1, input2;

	while(1){
		scanf("%d %d", &input1, &input2);
		if(input1>input2){
			printf("Decrescente\n");
		}
		else if(input1<input2){
			printf("Crescente\n");
		}
		else
			break;
	}

	return 0;
}