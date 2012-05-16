/*
 * stack.h
 *
 *  Created on: May 16, 2012
 *      Author: jitendriya
 */
#include <stdio.h>
#ifndef STACK_H_
#define STACK_H_

#define SIZE 5

struct Stack
{
	int top;
	int items[SIZE];
};

void push(struct Stack*,int);
int pop(struct Stack*);
int empty(struct Stack*);
void display(struct Stack*);

#endif /* STACK_H_ */
