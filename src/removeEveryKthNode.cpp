/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
}*pre,*start;

struct node * removeEveryKthNode(struct node *head, int K) {
	if (K <2|| head == NULL)
		return NULL;
	start = head;
	int i = 1;
	while (head != NULL)
	{
		if (i%K == 0)
			pre->next = head->next;
		i++;
		pre = head;
		head = head->next;
	}
	return start;
}