#include<stdio.h>
#include<conio.h>
#include<process.h>
#define stack_size 20

void push(int *top,int item)
{
	if(*top==stack_size)
	printf("Peter's cupboard full\n\n");
	else
	{
		(*top)++;
		printf("one shirt arranged\n");
		printf("Total number of shirts: %d\n\n",item);
	}
}
int pop(int *top,int item)
{
	if(*top==0)
	{
	printf("Peter's cupboard empty\n\n");
	item++;
	}
	else
	{
		printf("one shirt removed\n");
		(*top)--;
		printf("shirts remaining: %d\n\n",item);
	}
	return item;
}
void main()
{	int stack[stack_size], top=0;
	int a,item=0;
	clrscr();
	while(1)
	{
		printf("1.arrange shirts.\n");
		printf("2.remove shirt.\n");
		printf("3.exit.\n");
		scanf("%d/n",&a);
		switch(a)
		{
			case 1:
			{
				item++;
				push(&top,item);
				break;
			}
			case 2:
			{
				item--;
				item=pop(&top,item);
				break;
			}
			case 3:
			{
				exit(0);
				break;
			}
			default:
			{
				printf("wrong choice\n");
				break;
			}
		}
	}
	getch();
}