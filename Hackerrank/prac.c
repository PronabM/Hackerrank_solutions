#include<stdio.h>
#include<conio.h>
#define SIZE 8

int a[SIZE],n=0;

void create()
{
	int no,i;
	printf("Enter the no of elements: ");
	scanf("%d",&no);
	if(no<SIZE)
	{
		for(i=0;i<no;i++)
		{
			printf("Enter a[%d]",i);
			scanf("%d",&a[i]);
			n++;
		}
	}
	else
		printf("Creation not possible");
}

void display()
{
	int i;
	if(n!=0)
	{
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
		printf("\nNo. of Elements: %d\n",n);
	}
	else
		printf("\nEmpty List!");
}

void ainsert(int num, int pos)
{
	int i;
	if((pos<n)&&(n<=SIZE))
	{
		for(i=n-1;i>=pos;i--)
			a[i+1]=a[i];
		a[i+1]=num;
		n++;	
	}
	else
		printf("Insertion not possible");
}

void adelete(int pos)
{
	int i;
	if((pos<n)&&(n>0))
	{
		for(i=pos;i<n-1;i++)
			a[i]=a[i+1];
		n--;	
	}
	else 
		printf("Deletion not possible");
}

void main()
{
	int num,pos,c=0;
	do
	{
		printf("\n1. Create\n2. Display\n3. Insert\n4. Delete\nEnter: ");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				create();
				printf("After that: ");
				display();
				break;
			case 2:
				display();
				break;
			case 3:
				printf("Enter no. and pos: ");
				scanf("%d%d",&num,&pos);
				ainsert(num,pos);
				break;
			case 4:
				printf("Enter pos: ");
				scanf("%d",&pos);
				adelete(pos);
				break;			
		}
	}while(c!=5);
}
