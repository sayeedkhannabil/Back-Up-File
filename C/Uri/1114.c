#include <stdio.h>
int main()
{
	int input;

	while(1){
		scanf("%d", &input);
		if(input!=2002){
			printf("Senha Invalida\n");
			continue;
		}
		else{
			printf("Acesso Permitido\n");
			break;
		}
	}

	return 0;
}
