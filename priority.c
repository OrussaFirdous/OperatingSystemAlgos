#include<stdio.h>
#include<stdlib.h>
void display();
void insert();
void et();
struct pq
{
	char process[3];
	int priority;
	int bursttime;
	struct pq *next;
};
struct pq *start=NULL;
int sum=0;
int main()
{
    printf("NAME: ORUSSA FIRDOUS\n");
    printf("ROLL No.- 17BCS015\n");
	int ch,m=1;
	while(m==1)
	{
	printf("enter your choice\n1:add priority node\n2:display\n3:execution time\n4:exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:	insert(); break;
	case 2: display(); break;
	case 3: et(); break;
	case 4: m=0; break;
	default : printf("wrong choice"); break;
   }
   }
}
void display()
{
	struct pq *temp=start;
	if(start==NULL)
	{
		printf("nothing to print\n");
		return;
	}
	printf("process name, priority, burst time\n");
	while(temp!=NULL)
	{
		printf("%s\t%d\t%d\n",temp->process,temp->priority,temp->bursttime);
		temp=temp->next;
	}
}
void insert()
{
	int pri,bt;
 struct pq *temp,*temp2,*temp1;
    	 temp1=start;
    	 temp=start;
	    temp=(struct pq *)malloc(sizeof(struct pq));
	printf("enter process name,priority and burst time\n");
	scanf("%s",temp->process);
	scanf("%d%d",&pri,&bt);
		temp->priority=pri;
		temp->bursttime=bt;
		temp->next=NULL;
	if(start==NULL)
	{
     	start=temp;
	}
	else
	{
		if(start->priority>pri)
		{
			temp->next=start;
			start=temp;
		}
		else
		{
			while(temp1->priority<pri)
			{
				temp2=temp1;
				temp1=temp1->next;
				if(temp1==NULL)
				break;
			}
			if(temp1==NULL)
			{
				temp2->next=temp;
			}
			else
			{
				temp2->next=temp;
				temp->next=temp1;
			}
		}
	}
}
void et()
{
    struct pq *temp;
    temp=start;
	printf("execution time of process%s\n",start->process);
	printf("%d\n",sum+start->bursttime);
	sum=sum+start->bursttime;
	start=start->next;
	free(temp);
}