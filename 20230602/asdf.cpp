#include <stdio.h>
#include <stdlib.h>

typedef struct listNode* listPointer;
typedef struct listNode {
	char* name;
	char model;
	listPointer link;
} listNode;

void insertBack(listPointer* head, char* name, char model)
{

	listPointer newNode;
	newNode = (listPointer)malloc(sizeof(listNode));
	newNode->name = name;
	newNode->model = model;
	newNode->link = (*head)->link;
	(*head)->link = newNode;
	*head = newNode;

}

void deleteFront(listPointer head)
{
	if (head == NULL)
		printf("No one waiting.");
	else
	{
		listNode* temp = head;
		temp = temp->link;
		head->link = temp->link;
		temp->link = NULL;
		free(temp);
	}
}

void printList(listPointer head)
{
	int i = 0;
	listPointer temp = head->link;
	printf("Waiting line\n");
	while (temp->model != 'H')
	{
		printf("%d : %s Model %c\n", ++i, temp->name, temp->model);
		temp = temp->link;
	}
}

int main()
{
	listNode* head = (listPointer)malloc(sizeof(listNode));
	head->model = 'H';
	int command;
	char name[100];
	char model;
	int isDone = 0;
	while (1)
	{
		if (isDone)
			break;
		printf("Event 1: New Customer, 2: Technician Ready, 3: Exit >> ");
		scanf("%d", &command);

		switch (command)
		{
		case 1:
			printf("Enter Model (A, B, C): ");
			scanf(" %c",&model, sizeof(model));
			printf("Enter name: ");
			scanf(" %s", name, sizeof(name));
			insertBack(&head, name, model);
			printList(head);
			break;
		case 2:
			if (head == NULL)
				printf("List is empty.\n");
			else
			{
				deleteFront(head);
				printList(head);
			}
			break;
		case 3:
			printf("Exit service...");
			isDone = 1;
			break;
		}
	}
}
