#include <stdio.h>
int main()
{
	int i, t1, t2, next, input;
	t1=0;
	t2=1;

	scanf("%d", &input);

	for(i=0; i<input; i++){
		printf("%d", t1);

		if(i==input-1){
			printf("\n");
			break;
		}

		printf(" ");

		next=t1+t2;
		t1=t2;
		t2=next;
	}

	return 0;
}