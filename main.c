#include"header.h"

main()
{
ST *headptr=NULL,*h1=0,*h2=0,*h3=0,*temp=NULL;
int a,num,d;

while(1)
{
printf("\nenter option\n\t1>add_node\n\t2>search\n\t3>remove duplicate nodes\n\t4>merge\n\t5>print\n\t6>delete\n\t7>delete all nodes\n\t8>save\n\t9>exit\n");
printf("\t10>accending order\n\t11>decending order\n>");
scanf("%d",&a);
printf("---------------------------------------\n");
fflush(NULL);
if(a==1)
{
	printf("enter a num to add\n");
	scanf("%d",&num);
	add_end(&headptr,num);
}
else if(a==2)
{
	printf("enter a num to search\n");
	scanf("%d",&num);
	d=search(headptr,num);
	if(d)
		printf("found at =%u\n",d);
	else
		printf("not found\n");
}
else if(a==3)
{
	dupl(&headptr);
	//printf("\n");
}
else if(a==4)
{
	merge(h1,h2,&h3);
	//printf("\n");
}
else if(a==5)
	print(headptr);
else if(a==6)
{
	printf("enter a num to delete\n");
	scanf("%d",&num);
	delete(&headptr,num);
}
else if(a==7)
	delete_all(&headptr);
else if(a==8)
	save(headptr);
else if(a==9)
	break;
else if(a==10)
	accend(&headptr);
else if(a==11)
	decend(&headptr);
else
	printf("invalid input\n");
}
}
