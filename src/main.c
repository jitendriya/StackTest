/*
 * main.c
 *
 *  Created on: May 16, 2012
 *      Author: jitendriya
 */

#include "stack.h"
#include <stdio.h>

int main(int argc,char* argv[])
{
	struct Stack s;
 	s.top = -1;
 	int i;
 	int ele;
	push(&s,10);
	push(&s,20);
	push(&s,30);
	push(&s,40);
	push(&s,50);

	display(&s);
	for(i = 0; i< 5;i++)
	{
		ele = pop(&s);
		printf("%d\t" ,ele);
	}
	display(&s);


	return 0;
}
