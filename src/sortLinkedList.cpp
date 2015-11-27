/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
}*beg;

struct node * sortLinkedList(struct node *head) {
	if (head == NULL)
		return NULL;
	beg = head;
	int cnt = 0, i, j, temp;
	while (beg != NULL)
	{
		beg = beg->next;
		cnt++;
	}
	for (i = 0; i < cnt - 1; i++)
	{
		beg = head;
		for (j = 0; j < cnt - i - 1; j++)
		{
			if ((beg->num)>((beg->next)->num))
			{
				temp = beg->num;
				beg->num = (beg->next)->num;
				(beg->next)->num = temp;
			}
			beg = beg->next;
		}
	}
	return head;
}