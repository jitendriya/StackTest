/*
 * stack.c
 *
 *  Created on: May 16, 2012
 *      Author: jitendriya
 */
#include "stack.h"


int empty(struct Stack *ps)
{

if( ps->top == -1)
{
	return 1;
}
	else
		return 0;

	return 0;
}

void push(struct Stack *ps, int x)
{
	if(ps->top == SIZE-1)
		printf("\n overflow");

	else
	{

		ps->items[++(ps->top)] = x;

	}

	return;
}


int pop(struct Stack *ps)
{
	int ele;
	if(empty(ps))
	{
	printf("\n stack underflow");
	return 0;
	}
	else
		{
		ele = ps->items[ps->top--];
		}

	return ele;
}

void display(struct Stack *ps)
{
	if(empty(ps))
	{
		printf("\n stack empty");
	}

	else
		{
		printf("\n printing elements");

	int i = 0;
	for(i = 0; i <= ps->top; i++)

		printf("\n element:%d",ps->items[i]);

		}

}
