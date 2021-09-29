#include <stdio.h>
#include "STD_TYPES.h"
#include <stdlib.h>

typedef struct node
{
	u8 Data;
	struct node* next;
}node_t;



void AddNode(u8 data, node_t* head);
void printList(void);

void main (void)
{
	u16 x;
	u32 data;
	u8 exitFlag = 0;
	
	node_t* head = (node_t*)malloc(sizeof(node_t));
	node_t* first = (node_t*)malloc(sizeof(node_t));
	node_t* second = (node_t*)malloc(sizeof(node_t));

	head -> Data = 0;
	first -> Data = 1;
	second -> Data = 2;
	
	head -> next = first;
	first -> next = second;
	second -> next = NULL;
	
	while (exitFlag != 1)
	{
		printf("press 0 for adding a node \n");
		printf("press 1 for printing the list \n");
		printf("press 2 for terminating the code \n");
		scanf("%d",&x);
		
		switch(x)
		{
			case 0:
			printf("Enter new node data: ");
			scanf("%d",&data);
			AddNode(data, head);
			break;
			
			case 1:
			printList();
			break;
			
			case 2:
			printf("Thanks ...");
			exitFlag == 1;
			break;
			
			default: 
			printf("Wrong Input, Try again ...");
			break;
		}
	}
}

void AddNode(u8 data, node_t* head)
{
	node_t* new = (node_t*)malloc(sizeof(node_t));
	new -> next = NULL;
	new -> Data = data;
	
	node_t* last = head;
	while (last-> next != NULL)
	{
		last = last -> next;
	}
	last -> next = new;
}

void printList(void)
{
	node_t* ptr = head;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->Data);
		ptr = ptr->next;
	}
}