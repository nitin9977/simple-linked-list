#include"header.h"

//removing the duplicate items from the linked list
void dupl(ST **ptr)
{
ST *temp,*temp1,*temp2;
temp=*ptr;
while(temp!=0&&temp->next)
{
	temp1=temp->next;
	temp2=temp;
	while(temp1)
	{
		if(temp->num==temp1->num)
		{
			temp2->next=temp1->next;
			free(temp1);
		}
		else
			temp2=temp1;
		temp1=temp2->next;
	}
	temp=temp->next;
}
}

//merge 2 linked list
void merge(ST *h1,ST *h2,ST **h3)
{
int i=0;
while(h1 && h2)
{
	if(i%2==0)
	{
		add_end(h3,h1->num);
		h1=h1->next;
	}
	else
	{
		add_end(h3,h2->num);
		h2=h2->next;
	}
i++;
}
if(h1)
	while(h1)
	{
		add_end(h3,h1->num);
		h1=h1->next;
	}
else
	while(h2)
	{
		add_end(h3,h2->num);
		h2=h2->next;
	}
}

//deleting a node in lisked list
void delete(ST **ptr,int n)
{
ST *temp,*temp1;
temp=*ptr;
while(temp)
{
	if(temp->num==n)
		if(temp==*ptr)
		{
			*ptr=temp->next;
			free(temp);
			return;
		}
		else
		{
			temp1->next=temp->next;
			free(temp);
			return;
		}
	temp1=temp;
	temp=temp->next;
}
printf("node not found\n");
}

//delete all the nodes
void delete_all(ST **ptr)
{
ST *temp=*ptr;
while(*ptr)
{
	*ptr=temp->next;
	free(temp);
	temp=*ptr;
}
}

//swap adjacent nodes
void swap(ST **ptr)
{
ST *temp;
int num;
temp=*ptr;
if(temp)
	while(temp->next)
	{
		num=temp->num;
		temp->num=temp->next->num;
		temp->next->num=temp->num;
		if(temp->next->next)
			temp=temp->next->next;
		else
			temp=temp->next;
	}
}

//count the no of nodes
int count(ST *ptr)
{
int c=0;
while(ptr)
	c++;
return c;
}

//swap 'k'th position only
void swap_pos(ST **ptr,int n)
{
ST *temp,*temp1;
int i=0,j,num;
j=count(*ptr)-n+1;
printf("swapping %d-%d positions\n",n,j);
temp=temp1=*ptr;
for(i=1;i<n;i++)
	temp=temp->next;
for(i=1;i<j;i++)
	temp=temp1->next;

num=temp->num;
temp->num=temp1->num;
temp1->num=num;
}

//accending order 
void accend(ST **ptr)
{
int a;
ST *temp1=*ptr,*temp2=NULL;
while(1)
{
temp2=temp1->next;
	while(temp2)
	{
		if((temp1->num) > (temp2->num))
		{
			a=temp1->num;
			temp1->num=temp2->num;
			temp2->num=a;
		}
	temp2=temp2->next;
	}	
if(temp1->next)
	temp1=temp1->next;
else
	break;
}
}

//decending order 
void decend(ST **ptr)
{
int a;
ST *temp1=*ptr,*temp2=NULL;
while(1)
{
temp2=temp1->next;
	while(temp2)
	{
		if((temp1->num) < (temp2->num))
		{
			a=temp1->num;
			temp1->num=temp2->num;
			temp2->num=a;
		}
	temp2=temp2->next;
	}	
if(temp1->next)
	temp1=temp1->next;
else
	break;
}
}
