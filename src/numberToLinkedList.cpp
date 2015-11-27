/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
}*head,*ptr;
struct node * numberToLinkedList(int N) {
	head = NULL;
	if (N < 0)
		N = N*(-1);
	if (head == NULL)
	{
		head = (struct node *)malloc(1 * sizeof(struct node));
		head->next = NULL;
		head->num = N % 10;
		N = N / 10;
	}
	while (N>0)
	{
		ptr = (struct node *)malloc(1 * sizeof(struct node));
		ptr->next = head;
		ptr->num = N%10;
		head = ptr;
		N = N / 10;
	}
	return head;
}