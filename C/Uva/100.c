#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	printf("%d ", a);

	while(a!=1){
		if(a%2==1){
			a =3*a+1 ;
			printf("%d ", a);
		}

		if(a%2==0){
			a=a/2.0;
			printf("%d ", a);
		}
	}

	return 0;
}
