#include <stdio.h>

int main()
{
	int testcase, i, j;
	scanf("%d", &testcase);
	char ch= '\0';

	for(i=1; i<=testcase; i++){
		getc(ch);
		int n, sum=0, unit, flag=0;
		scanf("%d", &n);

		for(j=0; j<n; j++){
			scanf("%d", &unit);
			if(unit<0){
                flag=1;
                break;
			}
			sum+=unit;
		}
		if(flag==1)
            continue;

		printf("Case %d: %d\n", i, sum);
	}

	return 0;
}
