#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int co;
	int pow;
	struct Node* next;
};

void read_Poly(struct Node** poly)
{
	int co, exp, cont;
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	*poly = temp;
	do{
		printf("\n Coeffecient: ");
		scanf("%d", &co);
		printf("\n Exponent: ");
		scanf("%d", &exp);
		temp->co = co;
		temp->pow = exp;
		temp-> next = NULL;
		printf(“\nMore terms present? 1 for y and 0 for no: ");
		scanf("%d", &cont);
		if(cont)
		{
			temp->next = (struct Node*)malloc(sizeof(struct Node));
			temp = temp->next;
			temp->next = NULL;
		}
	}while(cont);	
}

void display_Poly(struct Node* poly)
{
	printf("\nPolynomial expression ");
	while(poly != NULL)
	{
		printf("%dX^%d", poly->co, poly->pow);
		poly = poly->next;
		if(poly != NULL)
			printf("+");
	}
}

void add_Poly(struct Node** result, struct Node* first, struct Node* second)
{
 	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
 	temp->next = NULL;
 	*result = temp;
 	while(first && second)
 	{
 		if(first->pow > second->pow)
 		{
 			temp->co = first->co;
 			temp->pow = first->pow;
 			first = first->next;
 		}
 		else if(first->pow < second->pow)
 		{
 			temp->co = second->co;
 			temp->pow = second->pow;
 			second = second->next;
 		}
 		else
 		{
 			temp->co = first->co + second->co;
 			temp->pow = first->pow;
 			first = first->next;
 			second = second->next;
 		}

 		if(first && second)
 		{
 			temp->next = (struct Node*)malloc(sizeof(struct Node));
 			temp = temp->next;
 			temp->next = NULL;
 		}
 	}
 	while(first || second)
 	{
 		temp->next = (struct Node*)malloc(sizeof(struct Node));
 		temp = temp->next;
 		temp->next = NULL;
 			
 		if(first)
 		{
 			temp->co = first->co;
 			temp->pow = first->pow;
 			first = first->next;
 		}

 		else if(second)
 		{
 			temp->co = second->co;
 			temp->pow = second->pow;
 			second = second->next;
 		}
 	}
}

Void main()
{

	struct Node* first = NULL;
	struct Node* second = NULL;
	struct Node* result = NULL;

	printf("\nEnter data:-\n");
	printf("\nFirst polynomial is:\n");
	read_Poly(&first);
	display_Poly(first);
	printf("\nSecond polynomial is:\n");
	read_Poly(&second);
	display_Poly(second);
	add_Poly(&result, first, second);
	display_Poly(result);
}

 
