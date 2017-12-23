#include <stdio.h>
int main()
{
	double s=1;
	int i;
	i=2;

	while(i<=100){
		s=s+(1.0/i);
		i++;
	}

	printf("%0.2lf\n", s);

	return 0;
}
