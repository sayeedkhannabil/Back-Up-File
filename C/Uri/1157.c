#include <stdio.h>
int main()
{
	int i, input, divisor;
	scanf("%d", &input);
	for(i=1; i<=input; i++){
		if(input%i==0){
			printf("%d\n", i);
		}
	}

	return 0;
}
