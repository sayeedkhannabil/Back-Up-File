#include <stdio.h>
int main()
{
	int i, input, count=0;

	for(i=0; i<5; i++){
		scanf("%d", &input);
		if(input%2==0 || input%(-2)==0){
			count++;
		}
	}

	printf("%d valores pares\n", count);

	return 0;
}