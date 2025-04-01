#include <stdlib.h>
#include <stdio.h>

int a;
int b;
char operator;
char minus = 

int calculate(int a, char operator, int b)
{
		if(operator == +)
		{
			printf("sign of operation is +");
		}
		else if(operator == -)
		{
			printf("sign is -");
		}
		else if(operator == /);
		{
			printf("division");
		}
		else if(operator == *)
		{
			printf("multiplication");
		}
	}
	else {
	printf("error");
	return "error;
	}

}


int main () 
{
scanf("%d %c %d", &a, &operator, &b);
	int result;
	result = calculate(a, operator, b);

	printf(result);
	return result;
}

