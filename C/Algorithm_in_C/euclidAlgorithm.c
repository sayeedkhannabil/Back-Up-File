///This program is the implemantation of euclid's algorithm of finding gcd

#include <stdio.h>

int gcd(int x, int y)
{
	int t;
	while(x>0){
		if(x<y){
			t=x;
			x=y;
			y=t;
		}

		x= x-y;
	}

	return y;
}

int main()
{
	int a, b;
	scanf("%d %d",  &a, &b);

	printf("%d %d %d", a, b, gcd(a, b));

	return 0;
}