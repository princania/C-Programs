#include<stdio.h>
#include<stdbool.h>
#define sizeOfStack 20

typedef struct
{
	int top;
	int data[sizeOfStack];
} Stack;

void initialize(Stack *stack)
{
	stack -> top = -1;
}

bool isEmpty(Stack *stack)
{
	bool ans = (stack->top) == -1;
	return ans;
}

bool isFull(Stack *stack)
{
	bool ans = (stack->top) == (sizeOfStack-1);
	return ans;
}

void push(Stack *stack, int data)
{
	if(isFull(stack))
	{
		printf("Stack is already full.\n");
		return;
	}
	stack->top++;
	stack->data[stack->top] = data;
	printf("Element Inserted : %d\n",stack->data[stack->top]);
}

void pop(Stack *stack)
{
	if(isEmpty(stack))
	{
		printf("Stack is already empty.\n");
		return;
	}
	printf("Popped Value = %d\n",stack->data[stack->top]);
	stack->top--;
}

void peek(Stack *stack)
{
	if(isEmpty(stack))
	{
		printf("The stack is empty, nothing to peek.\n");
		return;
	}
	printf("The Element at the top is : %d\n",stack->data[stack->top]);
}

void main()
{
	Stack stack;
	initialize(&stack);
	int choice;
	do{
	printf("\n\nEnter the operation you want to perform :\n");
	printf("1) Peek\n2) isEmpty\n3) isFull\n4) Push\n5) Pop\n6) Exit\nYour choice : ");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1: peek(&stack);
			break;
		case 2: bool ans1=isEmpty(&stack);
			ans1?printf("Yes, the stack is Empty.\n"):printf("No, the stack is not Empty\n");
			break;
		case 3: bool ans2=isFull(&stack);
			ans2?printf("Yes, the stack is Full.\n"):printf("No, the stack is not Full\n");
			break;
		case 4: printf("Enter the Data you want to add.\n");
			int data;
			scanf("%d",&data);
			push(&stack,data);
			break;
		case 5: pop(&stack);
			break;
		case 6: printf("Hope you enjoyed 😊\n");
			break;
		default:printf("Invalid Input");
			break;
	}
	}while(choice != 6);
}
