#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listNode* listPointer;
typedef struct listNode {
	char* name;
	char model;
	listPointer link;
} listNode;

void insertBack(listPointer* head, char* name, char model)
{

	listPointer newNode;
	listPointer temp;
	temp = *head;
	newNode = (listPointer)malloc(sizeof(*newNode));
	newNode->name = strdup(name);
	newNode->model = model;

	while ((*head)->link != *head && temp->link != *head)
		temp = temp->link;
	temp->link = newNode;
	newNode->link = *head;
}

int cerase(listPointer ptr)
{
	if (ptr && ptr->link)
	{
		listPointer temp = ptr->link;
		ptr->link = temp->link;
		free(temp);
		return 1;
	}
	else
	{
		return 0;
	}
}

listPointer findByValue(listPointer head, char model)
{
	listPointer temp = head->link;
	listPointer prev = head;

	while (temp != head)
	{
		if (temp->model == model)
			return prev;
		prev = temp;
		temp = temp->link;
	}
	return NULL;
}

void printList(listPointer head)
{
	int i = 0;
	listPointer temp;
	temp = head;
	
	if(temp->link == head)
		printf("Waiting line is empty.\n");
	else
	{
		printf("Waiting line\n");
		while (temp->link != head)
		{
			printf("%d : %s Model %c\n", ++i, temp->link->name, temp->link->model);
			temp = temp->link;
		}
	}
	
}

int main()
{
	listPointer head = (listPointer)malloc(sizeof(*head));
	head->model = 'H';
	head->link = head;
	int command;
	char iName[100];
	char model;
	int isDone = 0;
	while (1)
	{
		if (isDone)
			break;
		while (1)
		{
			printf("Event 1: New Customer, 2: Technician Ready, 3: Exit >> ");
			if(scanf("%d", &command))
			{
				if(command >= 1 && command <= 3)
					break;
				else
					printf("Wrong input.\n");
			} else {
				printf("Please enter a integer value.\n");
				int c;
				while ((c = getchar()) != '\n' && c != EOF);
        	}
		}
		

		switch (command)
		{
			case 1:
				
				while(1)
				{
					printf("Enter Model [A, B, C]: ");
					scanf(" %c",&model, sizeof(model));
					if(model == 'A' || model == 'B' || model == 'C')
						break;
					else
						printf("Wrong input.\n");
				}
				printf("Enter name: ");
				scanf(" %s", iName, sizeof(iName));
				insertBack(&head, iName, model);
				printList(head);
				break;
			case 2:
				if (head->link == head)
					printf("There are no customers.\n");
				else
				{
					char doneModel;
					while(1)
					{
						printf("Please enter the model for which the work is completed [A, B, C]: ");
						scanf(" %c",&doneModel, sizeof(doneModel));
						if(doneModel == 'A' || doneModel == 'B' || doneModel == 'C')
							break;
						else
							printf("Wrong input.\n");
					}
					listPointer done = findByValue(head, doneModel);
					if(done != NULL)
					{
						printf("Customer %s's service for model %c has been completed.\n", done->link->name, done->link->model);
						cerase(done);
						printList(head);
					}
					else
						printf("There are no customers waiting model %c.\n", doneModel);
				}
				break;
			case 3:
				printf("Exit service...");
				isDone = 1;
				break;
		}
	}
}
