#include <stdio.h>
int main()
{
	int testcase, i, j, input1, input2, sum;

	scanf("%d", &testcase);

	for(i=0; i<testcase; i++){
		scanf("%d %d", &input1, &input2);
		if(input1%2==0){
			input1+=1;
		}
		sum=0;
		for(j=0; j<input2; j++){
			sum+=input1;
			input1+=2;
		}

		printf("%d\n", sum);

	}

	return 0;
}
