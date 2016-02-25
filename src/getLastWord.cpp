/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	if (str)
	{
		int before, after = -1, iterate, i;
		char *last, null = '\0';
		for (iterate = 0, before = 0; str[iterate] != '\0';)
		{
			if (str[iterate] == ' ')
			{
				for (; str[iterate] && str[iterate] == ' '; iterate++);
				if (str[iterate])
				{
					before = iterate;
					after = before;
				}
			}
			else{
				after = iterate;
				iterate++;
			}
		}

		if (before <= after){
			last = (char*)malloc(sizeof(char)*(after - before + 1));
			for (iterate = before; iterate <= after; iterate++)
				last[iterate - before] = str[iterate];
			last[iterate - before] = '\0';
			return last;
		}
		return &null;
	}
	return NULL;
}
