#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listNode* listPointer;
typedef struct listNode {
	char model;
	char* name;
	char* state;
	listPointer link;
} listNode;
listPointer rear;

void insertBack(char* name, char model)
{
	listPointer newNode;
	newNode = (listPointer)malloc(sizeof(*newNode));
	newNode->name = _strdup(name);
	newNode->state = " Waiting  ";
	newNode->model = model;

	newNode->link = rear->link;
	rear->link = newNode;
	rear = newNode;
}

void cerase(listPointer ptr)
{
	listPointer temp = ptr->link;
	ptr->link = temp->link;
	if (temp->link->model == 'H')
		rear = ptr;
	free(temp);
}

listPointer findByValue(char model)
{
	listPointer temp = rear->link;

	while (temp->link != rear->link)
	{
		if (temp->link->model == model)
			return temp;
		temp = temp->link;
	}
	return NULL;
}

void printList()
{
	int i = 0;
	listPointer temp;
	temp = rear->link;

	if (temp->link == rear->link)
		printf("\nWaiting line is empty.\n");
	else
	{
		printf("\n----------------Waiting line-----------------");
		while (temp->link != rear->link)
		{
			printf("\n| %d | %s", ++i, temp->link->name);
			for (int j = 0; j < 15 - strlen(temp->link->name); j++)
				printf(" ");
			printf("| Model %c |", temp->link->model);
			if(temp->link->state == " Waiting  ")
				printf(" %s |", temp->link->state);
			else
				printf(" \033[0;32m%s\033[0;37m |", temp->link->state);
			temp = temp->link;
		}
		printf("\n---------------------------------------------\n");
	}
	printf("\n");
}

int main()
{
	rear = (listPointer)malloc(sizeof(listNode));
	rear->model = 'H';
	rear->link = rear;

	int command;
	char iName[100];
	char model;
	char doneModel;
	int isDone = 0;
	int isWork[3] = {0, 0, 0};
	while (1)
	{
		if (isDone)
			break;
		while (1)
		{
			printf("Event 1) New Customer, 2) Technician Ready, 3) Customer Service Assignment 4) Exit >> ");
			if (scanf_s("%d", &command))
			{
				if (command >= 1 && command <= 4)
					break;
				else
					printf("Wrong input.\n");
			}
			else {
				printf("Please enter a integer value.\n");
				int c;
				while ((c = getchar()) != '\n' && c != EOF);
			}
		}


		switch (command)
		{
		case 1:
			while (1)
			{
				printf("Enter Model [A, B, C]: ");
				scanf_s(" %c", &model, sizeof(model));
				if (model == 'A' || model == 'B' || model == 'C')
					break;
				else
					printf("\nWrong input.\n");
			}
			while (1)
			{
				printf("Enter name(Max 15 letter): ");
				scanf_s(" %s", iName, sizeof(iName));
				if (strlen(iName) > 15)
					printf("\nName is too long.\n");
				else
					break;
			}
			insertBack(iName, model);
			printList();
			break;
		case 2:
			
			while (1)
			{
				printf("Please enter the model for which the work is completed [A, B, C]: ");
				scanf_s(" %c", &doneModel, sizeof(doneModel));
				if (doneModel == 'A' || doneModel == 'B' || doneModel == 'C')
					break;
				else
					printf("\nWrong input.\n");
			}
			listPointer done = findByValue(doneModel);
			if (isWork[doneModel - 65])
			{
				isWork[doneModel - 65] = 0;
				printf("\nCustomer %s's service for model %c is done.\n", done->link->name, done->link->model);
				cerase(done);
				printList();
			}	
			else
				printf("\nThis repairman is already free now.\n");
			break;
		case 3:
			for (int i = 0; i < 3; i++)
			{
				listPointer done = findByValue(i + 65);
				if (!isWork[i] && done != NULL)
				{
					printf("Customer %s's service for model %c start.\n", done->link->name, done->link->model);
					done->link->state = "In service";
					isWork[i] = 1;
				}
			}
			printf("\n");
			break;
		case 4:
			printf("\nThank you for using service. :)\n Exit now...\n");
			isDone = 1;
			break;
		}
	}
}
