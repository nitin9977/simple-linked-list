#include"header.h"

void add_end(ST **ptr,int num)
{
ST *temp,*temp1;
temp=calloc(1,sizeof(ST));
temp1=calloc(1,sizeof(ST));
temp->num=num;
if(*ptr==NULL)
{
	temp->next=*ptr;
	*ptr=temp;
}
else
{
	temp1=*ptr;
	while(temp1->next)
		temp1=temp1->next;
	temp1->next=temp;
}
}

void add_begin(ST **ptr,int num)
{
ST *temp;
temp=calloc(1,sizeof(ST));
temp->next=*ptr;
*ptr=temp;
}
