/*
 *Author: chris
 *date  : 2017-06-20
 *brief : practice linked list
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TSIZE 45

struct film {
	char title[TSIZE];
	int rating;
	struct film *next; /*指向链表的下一个结构*/ 
};

int main(void)
{
	struct film *head = NULL;
	struct film *prev, *current;
	char input[TSIZE];
	
	puts("Enter first movie title:");
	while(gets(input) != NULL && input[0] != '\0')
	{
		current = (struct film *)malloc(sizeof(struct film));
		
		if(head == NULL)
		{
			head = current;
		}
		
		else
		{
			prev->next = current;
		}
		
		current->next = NULL;
		strcpy(current->title,input);
		puts("Enter your rating:");
		scanf("%d",&current->rating);
		
		while(getchar() != '\n')
			continue;
		
		puts("Enter next movie title (empty line to stop):");
		
		prev = current;
	}
	
	if(head == NULL)
	{
		printf("no data entered. \n");
	}
	else
	{
		printf("Here is the movie list: \n");
	}
	
	current = head;
	while(current != NULL)
	{
		printf("movie : %s  rating :  %d \n", current->title, current->rating);
		current = current->next;
	}
	
	current = head;
	
	while(current != NULL)
	{
		free(current);
		current = current->next;
	}
	printf("bye\n");
	
	return 0;
} 	








