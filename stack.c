#include<stdio.h>
#include<conio.h>
#define max 10
struct stack
{
	int arr[max];
	int top;
};
void init(struct stack *q )
{
	q->top=-1;
}
int isfull(struct stack **q)
{
	if(q->top==max-1)
	{
		return 1;
	}
	else
		return 0;
}
int isempty(struct stack *q)
{
	if(q->top==-1)
	{
		return 1;
	}
	else 
		return 0;
}
void pop(struct stack *q)
{
	if(isempty())

	{
 printf("stack is empty");
	}
	else
	{
		printf("element is %d",q->top);
	}
void push(struct stack *q)
{
	int x;
	if(isfull(&q))
	{
		printf("stack is full");
	}
	else
	{
		printf("enter data");
		scanf("%d",&x);
		(q->top)++;
		q->arr[q->top]=x;
	}
}
void display(struct stack s1)
{
	int i;
	i=s1.top;
	while(i>=0)
	{
		printf("%d",arr[i]);
		i--;
	}
}


void main()
{
	int i;
	struct stack s1;
	 init(&s1);
	 
	 do
	 {
		 printf("1.push \n2.pop\n3.display");
		 printf("enter your choice");
		 scanf("%d",&ch);
		 switch(ch)
		 {
		 case 1:push(&s1);
			 break;
		 case 2:pop(&s1);
			 break;
		 case 3:display(s1);
			 break;
		 }
	 }while(ch<=3);
	 getch();
}

	
