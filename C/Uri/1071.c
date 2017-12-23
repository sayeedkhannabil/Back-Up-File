#include <stdio.h>
int main()
{
	int input1, input2, i, sum=0;
	scanf("%d %d", &input1, &input2);

	i=input2+1;

	while(i<input1){
		if(i%2!=0 || i%(-2)!=0){
			sum+=i;
			i+=2;
		}
		else{
			i++;
		}
	}

	printf("%d\n", sum);

	return 0;
}
