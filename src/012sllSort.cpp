/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
}*ptr1;

void sll_012_sort(struct node *head){
	int *a;
	a = (int *)calloc(3, sizeof(int));
	ptr1 = head;
	while (head != NULL)
	{
		a[head->data]++;
		head = head->next;
	}
	head = ptr1;
	for (int i = 0; i < 3; i++)
	{
		while (a[i] != 0)
		{
			head->data = i;
			head = head->next;
			a[i]--;
		}
	}
}