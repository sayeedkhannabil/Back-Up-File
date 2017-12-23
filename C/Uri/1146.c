#include <stdio.h>
int main()
{
	int input, i;
	while(1){
		scanf("%d", &input);
		if(input==0){
            break;
      }
      else{
        for(i=1; i<input; i++){
			printf("%d ", i);
		}
		printf("%d\n", input);
      }
	}

	return 0;
}
