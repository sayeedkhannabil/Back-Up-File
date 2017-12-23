#include <stdio.h>
int main()
{
	int i, input, count=0;
	scanf("%d", &input);

	i= input;

	while(count<6){
		if(i%2!=0){
			printf("%d\n", i);
			i++;
			count++;
		}
		else
			i++;
	}

	return 0;

}
