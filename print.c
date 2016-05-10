#include"header.h"

void print(ST *ptr)
{
while(ptr)
{
	printf("%d\t",ptr->num);
	ptr=ptr->next;
}
printf("\n");
}
