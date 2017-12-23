#include <stdio.h>
int main()
{
	int i, testcase, input;
	scanf("%d", &testcase);

	for(i=0; i<testcase; i++){
		scanf("%d", &input);

		if(input==0){
			printf("NULL\n");
		}

		else if((input%2==0 || input%(-2)==0) && input>0){
			printf("EVEN POSITIVE\n");
		}

		else if((input%2==0 || input%(-2)==0) && input<0){
			printf("EVEN NEGATIVE\n");
		}

		else if((input%2!=0 || input%(-2)!=0) && input>0){
			printf("ODD POSITIVE\n");
		}

		else if((input%2!=0 || input%(-2)!=0) && input<0){
			printf("ODD NEGATIVE\n");
		}
	}

	return 0;
}
