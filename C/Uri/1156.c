#include <stdio.h>
int main()
{
	double i, j, s;
	i=3.0;
	j=2.0;
	s=1.0;

	while(1){
		s=s+(i/j);
		i=i+2.0;
		j=j*2.0;
		if(i==39.0)
			break;
	}

	printf("%0.2lf\n", s);

	return 0;
}
