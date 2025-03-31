#include <unistd.h>

void my_putchar (char c) 
{
	write(1, &c, 1);
}




int main (void)
{
	char character = 'a' ;
	while (character != 'z') 
		{
		my_putchar(character);
		character++;
		}
}
