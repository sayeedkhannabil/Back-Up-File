#include <stdio.h>

int perfectNumber(int n);

int main()
{
	int n;
	scanf("%d", &n);

	int testcase;

	testcase = perfectNumber(n);

	if(testcase == 1)
		printf("YES\n");

	else
		printf("NO\n");

}


int perfectNumber(int n)
{
	int i;
	int sum = 0;

	for(i=1; i<n; i++){
		if(n%i==0){
			sum= sum + i;
		}
	}

	if(sum == n)
		return 1;

	else
		return 0;
}
