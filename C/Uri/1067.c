#include <stdio.h>
int main()
{
	int count=0, i, input;

	scanf("%d", &input);

	for(i=1; i<=input; i+=2){
		printf("%d\n", i);
	}

	return 0;
}
