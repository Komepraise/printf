#include "head.h"

int for_string(char *string)
{
	int element = 0, val = 0;
	if (string != "\0")
	{
		_putchar(string[element]);
		val += 1;
		element++;
	}
	return (val);

}	
