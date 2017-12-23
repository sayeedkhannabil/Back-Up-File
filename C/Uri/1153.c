#include <stdio.h>
int main()
{
	int i, input, fact;
	fact=1;
	scanf("%d", &input);

	for(i=1; i<=input; i++){
		fact*=i;
	}

	printf("%d\n", fact);

	return 0;
}