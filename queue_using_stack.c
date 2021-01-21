#include <stdio.h>//for input output function
#include<stdlib.h>//for exit()

void enqueue();
void dequeue();
void display();

int stack1[100], stack2[100],n,top1=-1,top2=-1;
void main(void ) 
{
	int choice=0;
	printf("\nenter the length of queue"); //length of queue
	scanf("%d",&n); 
	
	while(choice!=4)
	{
	
	printf("\nenter the operation you want to perform");
	printf("\n1. enqueue\n2.dequeue\n3.display\n4.exit\n"); //different choice to perform different operation
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
			    enqueue();//for insert value
				break;
			}
		case 2:
			{
				dequeue();// for delete value
				break;
			}
		case 3:
		    {
		        display();
		        break;
		    }
		case 4:
			{
				exit(0); //for exit from progrem
			}
		default: //if any wrong number is entered
			{
				printf("wrong choice");
			}
	}
		
	}
}

void enqueue()
{
    if(top1==n-1) //checking the condition when queue is full
    {
        printf("queue overflow\n");
    }
    else if(top1==-1) //first time entry 
    {
        printf("enter data\n");
        scanf("%d",&stack1[++top1]);
    }
    else
    {
        while(top1!=-1)
        {
           stack2[++top2]=stack1[top1--];
           
        }
        printf("enter data\n");
        scanf("%d",&stack1[++top1]);
        
        while(top2!=-1)
        {
           stack1[++top1]=stack2[top2--];
        }
    }
}

void dequeue()
{
    if(top1==-1) //under flow when no data is present and trying to delete value
    {
        printf("under flow\n");
    }
    else//delete value
{
        printf("value you have deleted is %d",stack1[top1--]);
    }
}

void display()
{
    int i=top1;
    if (i==-1)
        printf("under flow");
    else
    {
        while(i>-1)
        {
            printf("%d  ",stack1[i]);
            i--;
        }
    }
    
    
}

