#include<iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int input1, input2;

	while(scanf("%d %d", &input1, &input2)){
		int countmain = 0;

		for(int i = input1; i<=input2; i++){
			int count = 0;
			int n = i;

			while(n!=1){
				if(n%2==0){
					n= n/2;
					count++;
				}

				if(n%2!=0){
					n = 3*n + 1;
					count++;
				}
			}
			if(count>countmain)
				countmain = count;
			}

			printf("%d %d %d\n", input1, input2, countmain);
		}

	return 0;
}
