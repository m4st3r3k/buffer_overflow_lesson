#include <stdio.h>

void secret_func(void)
{
	while(1)
		puts("Overflow: {u_C0nTr0l_Th3_St4cK}");
}

void vuln_func()
{

	char buffer[40];
	printf("Enter text:\n");
	scanf("%s", buffer);
	printf("You wrote: %s\n", buffer);

}

int main(void){

	vuln_func();
	return 0;

}


