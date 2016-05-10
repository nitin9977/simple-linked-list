#include"header.h"

ST * search(ST *ptr,int num)
{
while(ptr)
{
	if(ptr->num == num)
		return ptr;
	ptr=ptr->next;
}
return 0;
}
